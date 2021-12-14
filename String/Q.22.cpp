// Panlindrome String

#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int start, int end)
{

    if (start == end || s.length()==0)
        return true;
    if (s[start] != s[end])
        return false;
    
       if(start<end+1) 
      return palindrome(s, start+1, end-1);
}
int main()
{
    string name = "abba";
    cout << palindrome(name, 0, 3) << endl;
}