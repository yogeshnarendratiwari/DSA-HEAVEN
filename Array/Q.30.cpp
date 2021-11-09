// Largest sum contiguous subarray with starting and ending index

#include <iostream>
using namespace std;

int Kadane(int arr[], int n)
{
    int max_ending_here = 0;
    int max_so_far = INT16_MIN, start, end, s = 0;
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_ending_here > max_so_far)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }

        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
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
    cout << Kadane(arr, n) << endl;
}
