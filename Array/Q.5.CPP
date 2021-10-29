// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
using namespace std;

void array_sort(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
            cout << arr[i] << " ";
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {0, 1, 2, 0, 1, 2, 2, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    array_sort(arr, n);
}
