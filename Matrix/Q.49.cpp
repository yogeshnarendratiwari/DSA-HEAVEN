// Next Permutation

#include <iostream>
#include <vector>
using namespace std;
#define loop(a,b) for(int i=a ; i<b ; i++)
#define v vector<string> 




vector<string> Next_Permutation(string s,int l,int r){
    string original = s;
    string ans = s;
    v p;
    if(l==r){
        p.push_back(s);
        return;
    }

    loop(l,r+1){
        swap(s[l],s[i]);
        Next_Permutation(s,l+1,r);
        swap(s[l],s[i]);
    }


    
}






int main(){
Next_Permutation("123",0,2);
loop(0,p.size()){
        if(p[i]==ans)
        ans=p[i+1];
        if(ans!=original){
   cout<<ans;
   break;
        }
     
    }
}