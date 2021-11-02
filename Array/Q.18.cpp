// Median of array 

#include <bits/stdc++.h>
using namespace std;

int median(int arr[], int n)
{
    int med;
    sort(arr, arr + n);
    if (n % 2 == 0)
        med = (arr[n / 2] + arr[n / 2 - 1]) / 2;
    else
        med = arr[(n - 1) / 2];
    return med;
}

int main()
{
    int arr[] = {90, 100, 78, 89, 67};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Median of this array : ";
    cout << median(arr, n) << endl;
}