// Find if there is any subarray with sum equal to 0

#include <iostream>
using namespace std;

string SumSubarrayZero(int arr[], int n)
{
    int max_so_far = INT16_MIN;
    int max = 0;
    int result=false;
    for (int i = 0; i < n; i++)
    {
       if(arr[i]<0)
       result=true;

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
    cout<<SumSubarrayZero(arr,n)<<endl;
}
