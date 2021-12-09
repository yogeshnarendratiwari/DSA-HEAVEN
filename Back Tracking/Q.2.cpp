// kth permutation

#include <iostream>
#include <vector>
using namespace std;

string Kth_Permutation(int n,int k){
int fact = 1;
vector <int> v;
for(int i=1 ; i<n ; i++){
    fact =fact*i;
v.push_back(i);
}
v.push_back(n);

k=k-1;
string ans="";

while(true){
ans=ans+to_string(v[k/fact]);
v.erase(v.begin()+k/fact);
if(v.size()==0)
break;
k=k%fact;
fact=fact/v.size();
}
return ans;
}

int main(){
cout<<Kth_Permutation(3,2);
}