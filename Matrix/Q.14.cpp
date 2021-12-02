// Set Matrix Zeroes

#include <iostream>
#include <vector>
using namespace std;

void SET_MATRIX_ZEROES(vector<vector<int>> v, int R, int C)
{

    int x, y;

 vector<int> X;
 vector<int> Y;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if (v[i][j] == 0)
            {
                x = i;
                y = j;
                X.push_back(x);
                Y.push_back(y);

            }
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            if(v[i][j]==0){
                v[i+1][j]
            }
        }
    }
    cout << endl;
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {

            cout << v[i][j] << " ";
        }
        cout << '\n';
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

    SET_MATRIX_ZEROES(v, R, C);
}
