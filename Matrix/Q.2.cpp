// Find row with maximum no. of 1's in a sorted row wise matrix
#include <iostream>
#include <vector>
#include <map>
using namespace std;


int Max1 (vector<vector<int>>v,int r,int c){
    int count=0,max_count=0,row=0 ; 

    for(int i=0; i<r ; i++){
        for(int j=0 ; j<c ; j++){
           if(v[i][j]==1)
           count++;
        }
        if(count>=max_count)
        {
            max_count=count;
            row=i;
        }
        count=0;
    }
    return row;
}




int main(){
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
    cout<<Max1(v,4,4)<<endl;
}