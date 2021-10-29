// Union & intersection of two arrays

#include <iostream>
#include <set>
using namespace std;

void ArrayIntersection(int arr1[], int n1, int arr2[], int n2)
{

    
}

void ArrayUnion(int arr1[], int n1, int arr2[], int n2)
{
    set<int> s;
    for (int i = 0; i < n1; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < n2; i++)
        s.insert(arr2[i]);
    for (auto x = s.begin(); x != s.end(); x++)
        cout << *x << " ";
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