//Reverse the array

#include <iostream>
using namespace std;

void reverse(int arr[], int s, int e)
{
    if(s>=e)
    return;
    int temp = arr[s];
    arr[s] = arr[e];
    arr[e] = temp;

    reverse(arr,s+1,e-1);
}

void array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {5, 9, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Normal array
    cout << "The array is : ";
    array(arr, n);
    // On reversing the array
    cout << "Reverse of the array is : ";
    reverse(arr, 0, n - 1);
    array(arr, n);
}