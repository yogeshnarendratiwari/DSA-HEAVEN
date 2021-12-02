// Find the "Kth" max and min element of an array 

#include <iostream>
#include  <set>
#include  <vector>
using namespace std;

//using set

int kTH_Max(vector<int>  v , int  k){
    int n = v.size();

    set<int>  s(v.begin(),v.end());
    set<int> :: iterator it;

    it = s.begin();
    advance(it,k-1);
    return *it;

}

int main(){
    vector<int> v = {7,10,4,3,20,15};
    cout<<kTH_Max(v,3)<<endl;

}