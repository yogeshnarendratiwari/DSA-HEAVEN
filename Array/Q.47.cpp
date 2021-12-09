// Next Permutation

#include <iostream>
using namespace std;
#define num 321


void Permutation(string s, int l, int r)
{
    static int min = stoi(s);
    if (l == r)
    {
        
        if (num < stoi(s))
        {
            cout << s;
            exit(0);
        }

        if (stoi(s) < min)
            min = stoi(s);

        return;
    }

    for (int i = l; i <= r; i++)
    {
        swap(s[l], s[i]);
        Permutation(s, l + 1, r);
        swap(s[l], s[i]);

        if (i == r)
        {
            cout << min << endl;
            exit(0);
        }
    }
}

int main()
{
    Permutation("321", 0, 2);
}