// Panlindrome String

#include <bits/stdc++.h>
using namespace std;

    bool panlindrome(string s)
    {
        int start = 0;
        int end = s.length()-1;
        string original = s;
        while (start <= end)
        {
            int temp = s[start];
            s[start] = s[end];
            s[end] = temp;
            start++;
            end--;
        }
        if (s == original)
            return true;
        return false;
    }
int main()
{
    string name;
    cin>>name;
    cout<<panlindrome(name)<<endl;
}