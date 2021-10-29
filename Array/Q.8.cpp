// Union & intersection of two arrays

#include <bits/stdc++.h>
using namespace std;

int ArrayIntersection(int arr1[],int n1,int arr2[],int n2)
{
    int count = 0;
    map <int,int> m;
    for(int i=0 ; i<n1 ; i++){
        m[arr1[i]]++;
    }
    for(int i=0 ; i<n2 ; i++){
        m[arr2[i]]++;
    }

    for(auto x : m){
        if(x.second>1)
        count++;
    }
    return count;

   
}


int ArrayUnion(int arr1[],int n1,int arr2[],int n2){
    int common = ArrayIntersection(arr1,n1,arr2,n2);
    return n1+n2-common;
}

int main()
{
    int arr1[]= {1,5,4,8};
    int arr2[]={1,8,7,9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    cout<<"Intersection of these two arrays is : "<<ArrayIntersection(arr1,n1,arr2,n2)<<endl;
    cout<<"Union of these two arrays is : "<<ArrayUnion(arr1,n1,arr2,n2)<<endl;
}