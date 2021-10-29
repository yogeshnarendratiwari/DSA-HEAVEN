// Kth maximum element and minimum element in an array

#include <bits/stdc++.h>
using namespace std;

int Kth_Maximum(int arr[], int n, int k)
{
    sort(arr,arr+n);
    return arr[n-k];
}

int Kth_Minimum(int arr[], int n, int k)
{
    sort(arr,arr+n);
    return arr[k-1];
}


int main()
{
    int arr[]={1,5,9,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    cout<<"The "<<k<<" th maximum element is : "<<Kth_Maximum(arr,n,k)<<endl;
    cout<<"The "<<k<<" th minimum element is : "<<Kth_Minimum(arr,n,k)<<endl;
}