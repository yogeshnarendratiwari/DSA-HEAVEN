// Next Permutation

#include <bits/stdc++.h>

using namespace std;



void Permutation(vector<int> &v)
{
      int n = v.size(),i;
    for( i=n-2 ; i>=0 ; i--){
        if(v[i+1]>v[i])
        break;
    }
    if(i<0)
    reverse(v.begin(),v.end());
    else{
        int j;
        for(j=n-1 ; j>i ;j--){
            if(v[j]>v[i])
            break;
        }
        swap(v[i],v[j]);
         reverse(v.begin()+i+1,v.end());
    }
     for(int k=0 ; k<n ; k++){
       cout<<v[k];
    }
    cout<<endl;
}

int main()
{
  vector<int> v = {1,2,3};
 Permutation(v);
}