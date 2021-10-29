// Move all negative elements to one side of array

#include <bits/stdc++.h>
using namespace std;

void NandP(int arr[], int n)
{
     for(int i=0 ; i<n ; i++){
         if(arr[i]<0)
         cout<<arr[i]<<" ";
     }
    for(int i=0 ; i<n ; i++){
         if(arr[i]>=0)
         cout<<arr[i]<<" ";
     }

}

int main()
{
    int arr[] = {1,-1,0,-5,8,-3};
    int n= sizeof(arr)/sizeof(arr[0]);
    NandP(arr,n);
}