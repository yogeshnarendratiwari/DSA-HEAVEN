// Trapping Rain water problem

#include <iostream>
using namespace std;

int Rain_Water(int arr[], int n)
{
    int water = 0;
    int left[n];
    int right[n];
    left[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        left[i]= max(left[i-1],arr[i]);
    }
    right[n-1] = arr[n-1];
    for (int i = 1; i < n; i++)
    {
        right[n-1-i]= max(right[n-i],arr[n-1-i]);
    }
    for (int i = 0; i < n ; i++)
    {
        water +=min(left[i],right[i])-arr[i];
    }

    return water;
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
    cout << Rain_Water(arr, n) << endl;
}
