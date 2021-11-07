//

#include<iostream>
#include<map>
using namespace std;

void FindDuplicate(string* sp){
    string s = *sp;
    map <char , int> m;
    for(int i=0 ; i<s.length() ; i++){
        m[s[i]]++;
    }
    
    for(auto x : m){
        if(x.second>1){
             cout<<x.first<<" ,"<<"count = "<<x.second<<endl;
        }
       
    }
}

int main(){
    string str = "test string";
    FindDuplicate(&str);
}