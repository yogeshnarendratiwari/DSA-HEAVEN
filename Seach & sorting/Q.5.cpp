// Find first and last positions of an element in a sorted array

#include <iostream>
using namespace std;

int First(int arr[],int n,int x){
    
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]==x && arr[i+1] ==x)
        return i;
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]==x)
        return i;
    }
}

int Last(int arr[],int n,int x){
    for(int i=0 ; i<n-1 ; i++){
        if(arr[i]==x && arr[i+1] !=x)
        return i;
    }
    for(int i=0 ; i<n ; i++){
        if(arr[i]==x)
        return i;
    }
}

int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<First(arr,n,x)<<" "<<Last(arr,n,x)<<endl;
    
}