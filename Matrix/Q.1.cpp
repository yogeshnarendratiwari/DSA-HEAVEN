// Find median in a row wise sorted matrix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int median(vector<vector<int>> v, int r, int c)
{
}
vector <int> sort2D(vector<vector<int>> v, int r, int c){
    vector <int> v1;
    int s = v[0][0];
    v1.push_back(s);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(s<v[i][j])
            s=v[i][j];
            
        }
        v1.push_back(s);
    }
    return v1;
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

    vector<int> v3(sort2D(v,3,3));

    for (int i = 0; i < v3.size(); i++)
    {
            cout << v3[i] << " ";
        
       
    }
}
