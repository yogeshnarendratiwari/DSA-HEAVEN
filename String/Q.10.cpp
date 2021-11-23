// Array of characters

#include <iostream>
using namespace std;
int main()
{

    // char X[5] = {'a', 'b', 'c', 'd', 'e'};
    // char X[5] = {97, 98, 99, 100, 101};
    // char X[] = {97, 98, 99, 100, 101};
    // char X[5] = {'a', 'b'};

    // String
    // char name[] = "Yogesh"; -->Stack use
    // char * name = "Yogesh"; --> Heap use

    char name[10] = {'Y', 'o', 'g', 'e', 's', 'h'}; //Array of characters  = String
    
    // '\0'--> String delimeter / End of string class /Null character / termination
    // Java --> termination = length

    for (char i = 0; i <10; i++)
    {
        if(name[i]=='\0')
        break;
        cout << name[i];    ;  
    }

    // gets(name) -->entire string reading 
}