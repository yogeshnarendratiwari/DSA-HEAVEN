// Given an array of size n and a number k, fin all elements that appear more than " n/k " times.

#include <iostream>
#include <map>
using namespace std;

void NbyK(int arr[], int n, int k)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }
    for (auto x : m)
    {
        if (x.second > n / k)
            cout<<x.first<<" ";
    }
    cout<<endl;
   
}

int main()
{
    int arr[] = {3, 1, 2, 2, 1, 2, 3, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    NbyK(arr,n,k);
}
