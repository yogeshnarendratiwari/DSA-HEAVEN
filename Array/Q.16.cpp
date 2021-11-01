// Find longest coinsecutive subsequence

#include <bits/stdc++.h>
using namespace std;

int consecution(int arr[], int n)
{
    sort(arr, arr + n);
    int length = 1;
    int difference = arr[1] - arr[0];
    for (int i = 2; i < n; i++)
    {
        if (arr[i] - arr[i - 1] != difference)
            difference = arr[i] - arr[i - 1];
        length++;
    }
    return length;
}

int main(){
    int arr[] = {2,6,1,9,4,5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<consecution(arr,n)<<endl;
}