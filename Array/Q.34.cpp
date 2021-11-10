//  Write a program to cyclically rotate an array by one.

#include <iostream>
using namespace std;

void rotate(int arr[], int n)
{

    int i = 0, j = n - 1;
    while (i != j)
    {
        swap(arr[i], arr[j]);
        i++;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Original array is : ";
    print(arr,n);
    cout<<"Rotated array is : ";
    rotate(arr,n);
    print(arr,n);

}