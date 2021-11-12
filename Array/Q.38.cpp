// Find if there is any subarray with sum equal to 0

#include <iostream>
using namespace std;

string SumSubarrayZero(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            max = max + arr[j];
            if (max == 0)
                return "Yes";
        }
        max = 0;
    }
    return "No";
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
    cout<<SumSubarrayZero(arr,n)<<endl;
}
