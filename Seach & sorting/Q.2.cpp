// find majority element

#include <iostream>
#include <map>
#include <vector>
using namespace std;

vector<int> majority(int arr[], int n)
{
    vector<int> v;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    for (auto x : m)
    {
        if (x.second > n / 2)
        {
            v.push_back(x.first);
        }
    }
    return v;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   if(majority(arr, n).size()>0)
   {
       for(int i=0 ; i<majority(arr, n).size() ; i++){
           cout<<majority(arr, n)[i]<<" ";
       }
   }
   else
   cout<<"-1"<<endl;
}