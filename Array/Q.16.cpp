// Array Subset of another array

#include <bits/stdc++.h>
using namespace std;

string subset(int arr1[], int n1, int arr2[], int n2)
{
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0;
    int result = 0;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (arr1[i] == arr2[j])
            {
                result++;
                j++;
            }

            i++;
        }
        else
        {
            j++;
        }
    }
    if (result == n2)
    {
        return "Yes";
    }
    else
        return "No";
}

int main()
{
    int arr1[] = {11, 1, 13, 21, 3, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[] = {11, 3, 7, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << subset(arr1, n1, arr2, n2) << endl;
}