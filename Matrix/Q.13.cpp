// Find a specific pair in matrix

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define N 100

int maxi(int arr[N][N], int n)
{
   
    vector<int> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            v.push_back(arr[i][j]);
        }
    }
   
    int maximum = 0;
    int max_so_far = v[0];

    for (int i = 0; i < n * n; i++)
    {
        for (int j = i; j < n * n; j++)
        {
            maximum = abs(v[i] - v[j]);
            if (maximum >= max_so_far)
                max_so_far = maximum;
        }
    }
    return max_so_far;
}

int main()
{
    int n;
    cin >> n;
    int arr[N][N];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << maxi(arr, n) << endl;
}