// Comparison b/w two strings in terms of rotation

#include <bits/stdc++.h>
using namespace std;

class Rotate
{
public:
    bool rotate_string(string s1, string s2)
    {
        if(s1.size()!=s2.size())
        return false;

         queue <char> q1;
         queue <char> q2;
         for(int i=0 ; i<s1.length() ; i++){
             q1.push(s1.at(i));
         }
         for(int j=0 ; j<s2.length() ; j++){
             q2.push(s2.at(j));
         }
         int l=s2.length();
         for(int k=0 ; k<l ; k++)
         {
             char c = q2.front();
             q2.pop();
             q2.push(c);
             if(q1==q2)
             return true;
         }
         return false;
    }
};

int main()
{
    string s1;
    string s2;
    cin>>s1>>s2;
    Rotate r;
    cout<<r.rotate_string(s1,s2)<<endl;
}