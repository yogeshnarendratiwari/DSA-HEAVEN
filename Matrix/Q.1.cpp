// Find median in a row wise sorted matrix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int median(vector<vector<int>> v, int r, int c)
{
    vector <int> matrix;
  for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            matrix.push_back(v[i][j]);
        }
        
    }
    sort(matrix.begin(),matrix.end());
    int n = matrix.size();
    return matrix[(n-1)/2];
}

int main()
{
    int ele;
    vector<vector<int>> v;
    vector<int> x;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> ele;
            x.push_back(ele);
        }
        v.push_back(x);
        x.clear();
    }

cout<<median(v,3,3)<<endl;
   
}
