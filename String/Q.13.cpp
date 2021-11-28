// Write a program to find the longest Palindrome in a string.[ Longest palindromic Substring]

#include <iostream>
using namespace std;

class Palindrome
{


    bool isPalindromeCheck(string s, int x, int y)
    {
        int start = x;
        int end = y;
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

    int Length(int x, int y)
    {
        return y - x + 1;
    }
public:
    string longest_palindrome(string s)
    {
        int length = 0;
        int max_length = 0;
        int n = s.length();
        int S=0;
        int E=1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (isPalindromeCheck(s, i, j))
                {
                    length = Length(i, j);
                    if (length >= max_length)
                    {
                        max_length = length;
                        S = i;
                        E = j+1;
                    }
                }
            }
        }
        return s.substr(S,E);
     
    }
};

int main()
{
    string s = "abc";
    Palindrome p;
    cout<<p.longest_palindrome(s)<<endl;;
}