// String is a valid shuffle of two strings or not 

#include <bits/stdc++.h>
using namespace std;

class Shuffle
{
public:
    static bool checkLength(string first, string second, string final)
    {

        return first.length() + second.length() == final.length();
    }

    static string sorting(string final)
    {
        sort(final.begin(), final.end());
        return final;
    }
    static bool suffleCheck(string first, string second, string final)
    {
        if (!checkLength(first, second, final))
        {
            return false;
        }
        string result = sorting(final);

        int i = 0, j = 0, k = 0;
        while (k != result.length())
        {
            if (i < first.length() && first.at(i) == result.at(k))
                i++;
            else if (j < second.length() && second.at(j) == result.at(k))
                j++;
            else
                return false;
                k++;
        }
        return true;
    }
};

int main()
{
    Shuffle shuffle;
    string first;
    string second;
    string final;
    cin >> first >> second >> final;
    cout << shuffle.suffleCheck(first, second, final) << endl;
    ;
}