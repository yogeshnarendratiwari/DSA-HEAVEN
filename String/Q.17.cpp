#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void subsequence(string s){
    int l = s.length();
    vector<string> v;
    for(int i=0 ; i<(1<<l) ; i++){
        string final="";
            for(int j=0 ; j<l ; j++){
                if(i&(1<<j))
                final+= s[j];
            }
            if(final.size()>0)
            v.push_back(final);
    }
    sort(v.begin(),v.end());

    int n = v.size();
    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
}


int main(){
string s = "abc";
subsequence(s);
}