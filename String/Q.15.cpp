// Find Longest Recurring Subsequence in String
#include <iostream>
#include <vector>
#include <map>
using namespace std;


void subsequence(string s,int i,string cur){
    if(i==s.length()){
        cout<<cur<<endl;
        return;
    }
    subsequence(s,i+1,cur+s[i]);
    subsequence(s,i+1,cur);
}

int Longest_Recurring_Subsequence(string s){
int l = s.length();
vector<string> v;
map<string,int> m;



for(int i=0 ; i<l*l ; i++){
//    m[arr[i]]++;
}

int max=0;
for(auto x : m){

    if(x.second>max)
    max=x.second;
}
// return max;
}

int main(){
string s = "axxxy";
subsequence(s,0,"");



}