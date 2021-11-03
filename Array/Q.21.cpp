// Rearrange the array in alternating positive and negative items with O(1) extra space

#include <bits/stdc++.h>
using namespace std;

void plus_alternate_minus(int arr[], int n)
{
    sort(arr, arr + n);

    int i = 0;

    while (true)
    {
        if (arr[i] < 0)
            i++;
        else
            break;
    }

    while (true)
    {

        int x = i - 1, y = i;
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
        if (y < n-2)
        {
            y+=2;
        }
        else
        break;
        if (x >3)
        {
            x-=2;
        }
        else
        break;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
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
    plus_alternate_minus(arr, n);
}
