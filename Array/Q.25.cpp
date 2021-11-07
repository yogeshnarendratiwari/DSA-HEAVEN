// Chocolate distribution problem

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int choco_distribute(vector<int> v, int m, int n)
{
    sort(v.begin(), v.end());
    long difference = INT16_MAX;
    for (int i = 0; i < n - m + 1; i++)
    {
        if (v[i + m - 1] - v[i] < difference)
            difference = v[i + m - 1] - v[i];
    }
    return difference;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int x;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << choco_distribute(v, m, n) << endl;
}