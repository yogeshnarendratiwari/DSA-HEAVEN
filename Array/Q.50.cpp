// Count Inversion

#include <bits/stdc++.h>
using namespace std;

int Count_Inversion(int arr[], int n)
{
    int count=0;
   for(int i=n-1 ; i>=0 ; i--){
       for(int j=i ; j>=0 ; j--){
           if(arr[i] < arr[j])
           count++;
       }
   }
   return count;
}



int main()
{   int n;
    cin>>n;
    int arr[n];
	for(int i=0 ; i<n ; i++){
		cin>>arr[i];
	}
    cout<<Count_Inversion(arr,n)<<endl;
   
}