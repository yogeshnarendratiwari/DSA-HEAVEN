// Dynamic array

#include <iostream>
using namespace std;
int main(){
    int * p; // --> pointer
    p = new int[5];  // ---> Syntax   || C --> p = (int*)malloc (5 * sizeof(int)); || free(p) -->deleting memory
    p[0]=0; //--> Initializing elements
    p[1]=1;
    p[2]=2;
    p[3]=3;
 

 for (int i = 0; i < 4; i++)
 {
   cout<< *(p+i) << " ";  //--> PRINTING ELEMENTS
 }
 
 delete [] p; // --> MEMORY LEAK OVERCOMING (DELETING UNUSED MEMORY)

}