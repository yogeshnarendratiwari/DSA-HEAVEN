// K th Permutation

#include <iostream>
using namespace std;

void Permutation(string s,int l,int r,int k){
   static int ans=0;
    if(l==r){
        ans=ans+1;
        if(k==ans)
        cout<<s;
        return;
    }

    for(int i=l ; i<=r ; i++){
        swap(s[l],s[i]);
        Permutation(s,l+1,r,k);
        swap(s[l],s[i]);
    }

}






int main(){
int N;
N=3;

string num="";
for(int i=1 ; i<=N ;i++){
num = num+to_string(i);
}

Permutation(num,0,2,4);



}