// Triplet that sum to a given value

#include <iostream>
#include <vector>
using namespace std;

bool triplet(int arr[], int n, int X)
{
    int x = 0, y = 0, z = 0, k = 0;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= X)
        {
            v1.push_back(arr[i]);
            v2.push_back(arr[i]);
            v3.push_back(arr[i]);
        }
    }
    while (x < v1.size() || y < v2.size() || z < v3.size())
    {
        if (x != y && y != z && x != z)
        {
            if (v1[x] + v2[y] + v3[z] == X)
                return true;
        }
        if (k == 0)
        {
            if (x < v1.size())
            {
                x++;
            }

            k = 1;
        }
        else if (k == 1 )
        {
           if (y < v2.size())
            {
                y++;
            }
            k = 2;
        }
        else if (k == 2 )
        {
           if (z < v3.size())
            {
                z++;
            }
            k = 0;
        }
    }
    return false;
}

int main()
{
    int X;
    cin >> X;
    int arr[] = {1, 4, 45, 6, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << triplet(arr, n, X) << endl;
}