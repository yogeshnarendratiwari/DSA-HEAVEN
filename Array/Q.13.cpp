// Union & intersection of two arrays

#include <bits/stdc++.h>
using namespace std;

vector<int> ArrayIntersection(int arr1[], int n1, int arr2[], int n2)
{
    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    int i = 0, j = 0;

    vector<int> v;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (arr1[i] == arr2[j])
            {
                v.push_back(arr1[i]);
                j++;
            }

            i++;
        }
        else
        {
            j++;
        }
    }
    return v;
}

vector<int> ArrayUnion(int arr1[], int n1, int arr2[], int n2)
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

int main()
{
    int arr1[] = {1, 5, 4, 8, 6, 3};
    int arr2[] = {1, 8, 2,3, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout << "Union of these two arrays is : ";

    for (int i = 0; i < ArrayUnion(arr1, n1, arr2, n2).size(); i++)
    {
        cout << ArrayUnion(arr1, n1, arr2, n2)[i] << " ";
    }
    cout << endl;

    cout << "Intersection of these two arrays is : ";

    for (int i = 0; i < ArrayIntersection(arr1, n1, arr2, n2).size(); i++)
    {
        cout << ArrayIntersection(arr1, n1, arr2, n2)[i] << " ";
    }
    cout<<endl;
}