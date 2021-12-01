// Permutations of a given string

#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void Permutation(string s)
{
    int n = s.length();
    string original = s;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
            v.push_back(s);
            s = original;
        }
    }
   
    // sort(v.begin(),v.end());
    // set<string> s;
    // for(int i=0 ; i<N ; i++){
    //     cout<<v[i]<<" ";
    // }

    // deleting duplicates

    set<string> s;


}

int main()
{
    string s = "ABC";
    Permutation(s);
}