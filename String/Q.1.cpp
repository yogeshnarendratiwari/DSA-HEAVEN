// Reversing a string
#include <bits/stdc++.h>
using namespace std;

void ReverseIt(string name){
    int start=0;
    int end=name.length()-1;
    char temp;
    while(start<=end){
        temp = name.at(start);
        name.at(start)=name.at(end);
        name.at(end)=temp;
        start++;
        end--;
    }
    for(int i=0 ; i<name.length(); i++)
    cout<<name.at(i)<<" ";
    cout<<endl;
}


int main(){

string s = "Hello World";
// we have to get hsegoY
ReverseIt(s);

}