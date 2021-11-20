// find majority element

#include <iostream>
#include <algorithm>
using namespace std;

int majority(int arr[], int n)
{
    sort(arr, arr + n);
    int count = 1;
    int prev = arr[0];
    int max = -1;
    int ele;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] == prev)
            count++;
        else
        {
            count = 1;
            prev = arr[i];
        }

        if (count > max)
        {
            max = count;
            ele = arr[i];
            if (max > (n / 2))
                return ele;
        }
    }

    return -1;
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
    cout << majority(arr, n) << endl;
}