// Find a Fixed Point (Value equal to index) in a given array

#include <iostream>
#include <vector>
using namespace std;

vector<int> FixedPoint(int arr[], int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (i + 1 == arr[i])
            v.push_back(arr[i]);
    }
    return v;
}

int main()
{
    int arr[] = {15, 2, 45, 12, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < FixedPoint(arr, n).size(); i++)
    {
        cout << FixedPoint(arr, n)[i] << " ";
    }
}