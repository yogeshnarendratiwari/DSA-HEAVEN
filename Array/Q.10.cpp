// Union & intersection of two arrays

#include <iostream>
#include <map>
using namespace std;

void ArrayIntersection(int arr1[], int n1, int arr2[], int n2)
{
}

void ArrayUnion(int arr1[], int n1, int arr2[], int n2)
{
    map<int, int> m;
    for (int i = 0; i < n1; i++)
        m.insert({arr1[i], i});
    for (int i = 0; i < n2; i++)
        m.insert({arr2[i], i});
    for (auto x : m)
        cout << x.first << " ";
}

int main()
{
    int arr1[] = {1, 5, 4, 8};
    int arr2[] = {1, 8, 7, 9};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    // cout << "Intersection of these two arrays is : ";
    cout << "Union of these two arrays is : ";
    ArrayUnion(arr1, n1, arr2, n2);
}