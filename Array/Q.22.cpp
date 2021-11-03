// Trapping Rain water problem

#include <iostream>
using namespace std;

int Rain_Water(int arr[], int n)
{
    int water=0;
    for(int i=1 ; i<n-1 ; i++){
         int left=arr[i];
         for(int j=0 ; j<i ; j++){
             left=max(left,arr[j]);
         }
         int right=arr[i];
         for(int j=i+1 ; j<n ; j++){
             right=max(right,arr[j]);
         }
         water  = water+ (min(left,right)-arr[i]);

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
