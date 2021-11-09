// Kadane algorithm

#include <iostream>
using namespace std;

int Kadane(int arr[], int n)
{
    int max_ending_here = 0;  int max_so_far=INT16_MIN;
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i] <= max_ending_here+arr[i])
            max_ending_here = max_ending_here + arr[i];
        else
        max_ending_here = arr[i];
        if(max_ending_here>max_so_far)
        max_so_far=max_ending_here;
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