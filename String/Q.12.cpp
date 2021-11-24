// Changing case

#include <iostream>
using namespace std;
int main()
{

    string name = "Yogesh";

    // if capital add --> 32
    // if small sub --> 32

    for (int i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'A' && int(name[i]) <= 90)
            name[i] = name[i] + 32;
        else if (name[i] >= 'a' && name[i] <= 122)
           name[i] = name[i] - 32;
    }

    cout<<name<<endl;
}