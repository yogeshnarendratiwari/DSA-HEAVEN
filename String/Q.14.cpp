// Write a program to find the longest Palindrome in a string.[ Longest palindromic Substring]

#include <iostream>
#include <cstring>
using namespace std;

void longest_palindrome(string s){
      int n = s.size();
      bool table[n][n];

      memset(table,0,sizeof(table)); //array initializer syntax --> memset(array_name,value,sizeof(array_name)); || to include <cstring>

      for(int i=0 ; i<n ; i++){
          table[i][i] = true;
      }
       int start = 0;
       int max_length=1;
      for(int i=0 ; i<n ; i++){
          if(s[i]==s[i+1])
          {
              table[i][i+1]= true;
              start = i;
              max_length=2;
          }
      }

      for(int k=3 ; k<=n ; k++){
          for(int i=0 ; i<n-k+1 ; i++){
                    int j=i+k-1;
                    if(table[i+1][j-1] && s[i]==s[j])
                    table[i][j]=true;
          }
      }

}

int main()
{
    string s = "abc";
    longest_palindrome(s);