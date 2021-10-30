// cyclically rotate an array by one.

#include <iostream>
using namespace std;

void cyclic_rotate(int arr[], int n)
{
    int temp = arr[n - 1];
    for (int i = 0; i < n - 1; i++)
    {
        arr[n - 1 - i] = arr[n - 2 - i];
    }
    arr[0] = temp;
    for (int i = 0; i < n ; i++)
    {
       cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cyclic_rotate(arr, n);
}
