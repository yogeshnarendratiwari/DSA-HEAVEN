// Search an element in a matriix

#include <iostream>
#include <vector>
using namespace std;

bool Search(vector<vector<int>> v, int R, int C,int ele)
{
    vector<int> v1;
     for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            v1.push_back(v[i][j]);
        }
    }

    for(int i=0 ; i<v1.size(); i++){
        if(v1[i]==ele)
        return true;
    }
    return false;
}

int main()
{
    int R, C,eleM;
    cin>>eleM;
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
    cout << Search(v, R, C,eleM) << endl;
}
