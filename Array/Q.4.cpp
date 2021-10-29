//Reverse the array

#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
   int start = 0;
   int end = n-1;
   while(start<=end)
   {
       int temp=arr[start];
       arr[start]=arr[end];
       arr[end]=temp;
       start++;
       end--;
   }
   for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    reverse(arr, n);
}