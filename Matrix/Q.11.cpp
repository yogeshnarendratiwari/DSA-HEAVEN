// Kth smallest element in a row-cpumn wise sorted matrix

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int KTH_Element(vector<vector<int>> v , int R,int C,int K){

vector<int> final;
for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
        {
            final.push_back(v[i][j]);
        }
        
    }
    sort(final.begin(),final.end());

    return final[K-1];

}



int main(){
   int R, C ,K;
    cin >> R >> C>>K;
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

    cout<<KTH_Element(v,R,C,K)<<endl;
}
