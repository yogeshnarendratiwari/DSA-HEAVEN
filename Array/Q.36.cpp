// Move all the negative elements to one side of the array

#include <iostream>
using namespace std;

void negative(int arr[], int n)
{
   int j=0;
   for(int i=0 ; i<n ; i++){
       if(arr[i]<0){
           if(i!=j)
           swap(arr[i],arr[j]);
           j++;
       }
   }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
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
    cout << "Original array is : ";
    print(arr, n);
    cout << "Modified array is : ";
    negative(arr, n);
    print(arr, n);
}