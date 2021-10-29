// Union & intersection of two arrays

#include <bits/stdc++.h>
using namespace std;

int ArrayIntersection(int arr1[],int n1,int arr2[],int n2)
{
    int count = 0;
    

    sort(arr1, arr1 + n1);
    sort(arr2, arr2 + n2);

    if (n1 >= n2)
    {
        for (int i = 0; i < n2; i++)
        {
            for (int j = 0; j < n1; j++)
            {
                if (arr2[i] == arr1[j])
                    count++;
            }
        }
    }
    else
    {
        for (int i = 0; i < n1; i++)
        {
            for (int j = 0; j < n2; j++)
            {
                if (arr1[i] == arr2[j])
                    count++;
            }
        }
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