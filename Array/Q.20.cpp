// Median of two sorted arrays

#include <bits/stdc++.h>
using namespace std;
vector<int> ArrayUnion(int arr1[], int n1, int arr2[],int n2)
{
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0;

    vector<int> v;
    while (i <= n1 - 1 && j <= n2 - 1)
    {
        if (arr1[i] <= arr2[j])
        {
            v.push_back(arr1[i]);
            if (arr1[i] == arr2[j])
                j++;
            i++;
        }
        else
        {
            v.push_back(arr2[j]);
            j++;
        }
    }

    if (j > n2 - 1)
    {
        while (i <= n1 - 1)
        {
            v.push_back(arr1[i]);
            i++;
        }
    }
    else
    {
        while (j <= n2 - 1)
        {
            v.push_back(arr2[j]);
            j++;
        }
    }
    return v;
}

int sorted_median(int arr1[], int n1, int arr2[],int n2)
{

    vector<int> v1(ArrayUnion(arr1, n1, arr2,n2));
    sort(v1.begin(), v1.end());
     int med;
     int m = v1.size();
    if (m % 2 == 0)
        med = (v1[m / 2] + v1[m / 2 - 1]) / 2;
    else
        med = v1[(m- 1) / 2];

    return med;
}

int main()
{
     int arr1[] ={-5, 3, 6, 12, 15};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {-12, -10, -6, -3, 4, 10};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << sorted_median(arr1, n1, arr2,n2) << endl;
}
