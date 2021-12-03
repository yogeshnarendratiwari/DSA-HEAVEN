// All permutation of a string

#include <iostream>
using namespace std;

void Permutation(string s,string answer){
  
  if(s.length()==0)
  {
      cout<<answer<<" ";
      return;
  }

    for(int i=0 ; i<s.length(); i++){
        char ch = s[i];
        string left = s.substr(0,i);
        string right = s.substr(i+1);
        string rest = left+right;
        Permutation(rest,answer+ch);
    }
}

int main(){
    string s = "abc";
    Permutation(s,"");

}