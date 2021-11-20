// Minimum no. of Jumps to reach end of an array

#include <iostream>
#include <map>
#include <vector>
using namespace std;

int Jump(int arr[], int n)
{   map <int,int> m;

    for(int i=0 ; i<n ; i++){
        m[arr[i]]++;
    }
    vector <int> v;
    for(auto x : m){
        if(x.second>1)
        v.push_back(x.first);
    }
    


}
int main()
{
}