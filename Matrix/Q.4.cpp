// Print elements in sorted order using row-column wise sorted matrix

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void SortedRCMatrix(vector<vector<int>> v, int N)
{
    vector<int> LV;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            LV.push_back(v[i][j]);
        }
    }
    sort(LV.begin(), LV.end());
    int x = 0, y = N;
    while (x<N*N && y<N*N){
        for (int j = x; j < y; j++)
        {
            cout << LV[j]<<" ";
        }
        x+=N;
        y+=N;
    cout << endl;}
    // vector<vector<int>> final;
    // vector <int> fake;
    // int x=0,y=N;
    // for (int i = 0; i < N; i++)
    // {  
    //     for (int j = x; j < y; j++)
    //     {
    //        fake.push_back(LV[j]);
    //     }
    //     x=x+N;
    //     y=y+N;
    //     final.push_back(fake);
    //     fake.clear();
    // }
    // return final;
}

int main()
{
    int N;
    cin >> N;

    int ele;
    vector<vector<int>> v;
    vector<int> x;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> ele;
            x.push_back(ele);
        }
        v.push_back(x);
        x.clear();
    }
    SortedRCMatrix(v, N);
}