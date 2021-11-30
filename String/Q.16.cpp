#include <iostream>
using namespace std;


void subsequence(string s,int i,string cur){
    if(i==s.length()){
        cout<<cur<<" ";
        return;
    }
    subsequence(s,i+1,cur+s[i]);
    subsequence(s,i+1,cur);
}


int main(){
string s = "abc";
subsequence(s,0,"");



}