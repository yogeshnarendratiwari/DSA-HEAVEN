// Reverse words of string

#include <bits/stdc++.h>
using namespace std;

void Reverse_Word(string s)
{
    vector<string> v;
    char* rest = s;
  char* token = strtok(rest," ");
  while(token!=NULL){
      v.push_back(token);
  }
  for(int i=v.size()-1; i>=0 ; i--)
  {
      cout<<v[i]<<" ";
  }
}

int main()
{
    string s = "the sky is blue";
    Reverse_Word(s);
}