// Largest sum contiguous subarray

#include <iostream>
using namespace std;

int DP(int arr[], int n)
{
    int max_ending_here = 0;
    int max_so_far = INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max(arr[i], max_ending_here + arr[i]);
        max_so_far = max(max_so_far, max_ending_here);
    }
    return max_so_far;
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
    cout << DP(arr, n) << endl;
}