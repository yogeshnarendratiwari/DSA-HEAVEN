// Subsequences of a string
#include <iostream>
using namespace std;


void Sub(string s,string cur){
    if(s.empty()){
        cout<<cur<<" ";
        return;
    }

    Sub(s.substr(1),cur+s[0]);
   Sub(s.substr(1),cur);

}


int main(){
Sub("abc","");
}