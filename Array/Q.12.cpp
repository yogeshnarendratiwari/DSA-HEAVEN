// find duplicate in an array of N+1 Integers

#include <iostream>
#include <map>
using namespace std;

int duplicate(int arr[], int n)
{
    map <int,int> m;
        for(int i=0 ; i< n ; i++){
            m[arr[i]]++;
        }
        for(auto x : m){
            if(x.second>1)
                return x.first;
        }
        return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<duplicate(arr, n)<<endl;
}
