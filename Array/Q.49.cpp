// Count Inversion

#include <iostream>
using namespace std;

int merge(int arr[],int n,int left,int mid,int right){
    
}



int merge_sort(int arr[],int n,int left,int right){
    int count=0;
    
    if(left<right){
      int mid=(left+right)/2;
        count=count+merge_sort(arr,n,left,mid);
        count=count+merge_sort(arr,n,mid+1,right);
        count=count+merge(arr,n,left,mid,right);
    }
    return inv_count;
}


int main(){

}