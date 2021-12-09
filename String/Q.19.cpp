// Subsequences of a string
#include <iostream>
using namespace std;


void Sub(string s,int i,string cur){
    if(i==s.length()){
        cout<<cur<<" ";
        return;
    }

    Sub(s,i+1,cur+s[i]);
    Sub(s,i+1,cur);

}


int main(){
Sub("abc",0,"");
}