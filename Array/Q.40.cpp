// Find whether an array is a subset of another array

#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    int arr1[]={1,2,3,4,5};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={1,2,3};
    int n2=sizeof(arr2)/sizeof(arr2[0]);
    unordered_set <int> s;

    for(int i=0 ; i<n1 ; i++){
        s.insert(arr1[i]);
    }
    int n = s.size();
    for(int i=0 ; i<n2 ; i++){
        s.insert(arr2[i]);
    }
    int m=s.size();
    if(n==m)
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
    

}
