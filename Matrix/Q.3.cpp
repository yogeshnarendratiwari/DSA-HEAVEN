//  Find row with maximum no. of 1's in a sorted row wise matrix

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int Max1(vector<vector<int>> v, int r, int c)
{
   int max_row=0;
   int j=c-1;
   for(int i=0 ; i<r ; i++){

       bool flag = false;

       while(j>=0 && v[i][j]==1){
           j=j-1;
           flag=true;
       }
       if(flag){
           max_row=i;
       }
   }
   if(max_row==0 && v[0][c-1]==0)
   return -1;
   return max_row;
}

int main()
{
    int ele;
    vector<vector<int>> v;
    vector<int> x;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> ele;
            x.push_back(ele);
        }
        v.push_back(x);
        x.clear();
    }
    cout << Max1(v, 4, 4) << endl;
}