// Comparison b/w two strings in terms of rotation

#include <bits/stdc++.h>
using namespace std;

bool Rotation(string s, string p)
{
    if(s.length()!=p.length())
    return false;
    char temp;
    
    bool result = false;
    int j=1;
    while (j<s.length())
    {
        temp = s.at(0);
        for (int i = 0; i < s.length() - 1; i++)
        {
            s.at(i) = s.at(i + 1);
        }
        s.at(s.length()-1)=temp;
        if (s == p)
        {
            result = true;
            break;
        }
        j++;
    }
    return result;
}

int main()
{
    string s,p;
    cin>>s;
    cin>>p;
    cout<<Rotation(s,p)<<endl;
}