// Panlindrome String

#include <bits/stdc++.h>
using namespace std;
bool panlindrome(string s)
{
int start=0;
int end = s.length()-1;
bool result = true;
while(start<=end)
{
    if(s.at(start)!=s.at(end))
    result=false;
    start++;
    end--;
    
}
return result;



}
int main()
{
    string name;
    cin>>name;
    cout<<panlindrome(name)<<endl;
}