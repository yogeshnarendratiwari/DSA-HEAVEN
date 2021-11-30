#include <iostream>
using namespace std;


void subsequence(string s){
    int l = s.length();
    
    for(int i=0 ; i<(1<<l) ; i++){
        string final="";
            for(int j=0 ; j<l ; j++){
                if(i&(1<<j))
                final+= s[j];
            }
            cout<<final<<" ";
    }
}


int main(){
string s = "abc";
subsequence(s);
}