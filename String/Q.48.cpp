// All permutation of a string

#include <iostream>
using namespace std;

void Permutation(string s, int l, int r)
{

    if (l == r)
    {
        cout << s << " ";
        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        Permutation(s,l+1,r);
        swap(s[l], s[i]);
    }
}

int main()
{
    string s = "abc";
    Permutation(s, 0,2);
}