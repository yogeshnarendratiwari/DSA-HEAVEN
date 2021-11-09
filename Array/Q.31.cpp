//Reverse the array

#include <iostream>
using namespace std;

void reverse(int arr[], int n)
{
    int s=0 , e=n-1;
    while(s<=e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        s++;
        e--;
    }
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
     array(arr, n);
}