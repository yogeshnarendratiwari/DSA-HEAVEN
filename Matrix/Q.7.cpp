// Spiral traversal on a Matrix

#include <iostream>
#include <vector>
using namespace std;

void SpiralTraversal(vector<vector<int>> v, int R, int C)
{
    int x=R,y=C;
    int r,c;
    while (true)
    {   c=0; r=0;
        for(int i=0 ; i<y ; i++){
            cout<<v[r][i]<< " ";
        }
        for(int i=0 ; i<x; i++){
            cout<<v[i][c]<< " ";
        }
        for(int i=y-1 ; i<=0; i++){
            cout<<v[r+R-1][i]<< " ";
        }
        for(int i=x-1 ; i<x; i++){
            cout<<v[i][c]<< " ";
        }

        
    }
    
}

int main()
{
    int R, C;
    cin >> R >> C;
    int ele;
    vector<vector<int>> v;
    vector<int> x;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            cin >> ele;
            x.push_back(ele);
        }
        v.push_back(x);
        x.clear();
    }
    cout << SpiralTraversal(v, R, C) << endl;
}
