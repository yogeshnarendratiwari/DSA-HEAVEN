// Best time to sell and buy stock

// Move all the negative elements to one side of the array

#include <iostream>
using namespace std;

int stock(int arr[], int n)
{
    int min_price = INT16_MAX;
    int max_profit = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min_price)
            min_price = arr[i];
        if (arr[i] - min_price > max_profit)
            max_profit = arr[i] - min_price;
    }
    return max_profit;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
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
    cout << "Max pofit is : ";
    cout << stock(arr, n);
  
}