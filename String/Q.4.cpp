// Comparison b/w two strings in terms of rotation

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1;
    string s2;
    cin >> s1 >> s2;
    string s3 = s1 + s1;
    if(s3.find(s2))
    cout<<"Yes"<<endl;
    else
    cout<<"No"<<endl;
}