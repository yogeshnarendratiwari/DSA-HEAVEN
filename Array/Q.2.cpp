// maximum & minimum element in an array

#include <iostream>
using namespace std;

int maximum(int arr[], int n)
{
    int max = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= max)
            max = arr[i];
    }
    return max;
}

int minimum(int arr[], int n)
{
    int min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= min)
            min = arr[i];
    }
    return min;
}

int main()
{
    int arr[] = {1, 8, 9, 4, 6, 7, 2, 12, 0, 50, 41, 1, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The maximum element is : " << maximum(arr, n) << endl;
    cout << "The minimum element is : " << minimum(arr, n) << endl;
}