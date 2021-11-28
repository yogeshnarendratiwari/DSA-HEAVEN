// Common elements in all rows of a given matrix

#include <iostream>
#include <map>
#include <vector>
using namespace std;


void common(vector<vector<int>> v , int R,int C){
map <int,int> m;
for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
           m[v[i][j]]++;
        }
        
    }
  for(auto x : m){
   if(x.second > R){
       cout<<x.first<<" ";
   }
  }
}



int main(){
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

    common(v,R,C);
}
