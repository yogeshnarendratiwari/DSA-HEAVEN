// Best time to buy and Sell stock

#include <bits/stdc++.h>
using namespace std;

class Market
{
    public :
    int market(int arr[], int n)
    {   int profit = 0;
        int buying_price, selling_price;
         for(int i=0 ; i<n ; i++){
             for(int j=i+1 ; j<n ; j++)
             {
                 buying_price = arr[i];
                 selling_price = arr[j];
                 if(buying_price<selling_price){
                     int difference = selling_price-buying_price;
                     if(difference>profit)
                     profit= difference;
                 }
             }
         }
         return profit;   
    }
};

int main()
{   Market m;
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr) / sizeof(arr[0]);
   cout << m.market(arr,n);
}