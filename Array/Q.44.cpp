// Given an array which consists of only 0, 1 and 2. Sort the array without using any sorting algo

#include <iostream>
#include <vector>
using namespace std;

// Dutch National flag problem 
// 0-->red
// 1-->white
// 2-->blue

void ArraySort(vector<int> v){
    int n=v.size();
    int low=0;
    int mid=0;
    int high = n-1;

    while(mid<=high){
        switch(v[mid]){
            case 0 : swap(v[mid++],v[low++]);
                     break;
            case 1 : mid++;
                     break;
            case 2 : swap(v[mid],v[high--]);
                    break;         
        }
    }

    for(int i=0 ; i<n ; i++){
        cout<<v[i]<<" ";
    }
}


int main(){
    vector<int> v = {0,1,2,0,1,2};
    ArraySort(v);

}