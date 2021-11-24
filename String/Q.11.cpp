// Length of a string

#include  <iostream>
using namespace std;
int main(){

    string name = "Yogesh";
    int length =0;
    for(int i=0 ; name[i]!='\0' ; i++){
        length++;
    }
    cout<<"The length of name string is "<<length<<endl;
}