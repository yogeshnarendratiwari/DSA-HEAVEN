// Move all the negative elements to one side of the array

#include <iostream>
using namespace std;

void negative(int arr[], int n)
{
    int left = 0;
    int right = n - 1;
    while (left <= right)
    {
        if (arr[left] < 0 && arr[right] >= 0)
            right--;
        else if (arr[left] >= 0 && arr[right] < 0)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
        else if (arr[left] < 0 && arr[right] < 0)
            left++;
        else
        right--;
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
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
    cout << "Original array is : ";
    print(arr, n);
    cout << "Modified array is : ";
    negative(arr, n);
    print(arr, n);
}