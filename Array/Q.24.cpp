// Minimum swaps required bring elements less equal K together
#include <iostream>

using namespace std;

int Swap(int arr[], int n, int k)
{
    int swap = 0;
    int index = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] <= k)
            index++;
    }
    for (int i = 0; i < index ; i++)
    {
        if (arr[i] > k)
            swap++;
    }
    return swap;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<Swap(arr,n,k)<<endl;
}