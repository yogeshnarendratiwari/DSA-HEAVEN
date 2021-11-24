// Diagonal matrix

#include <iostream>
using namespace std;

void set(int A[], int i, int j, int x)
{
    if (i == j)
    {
        cin >> x;
        A[i - 1] = x;
    }
}

int get(int A[], int i, int j)
{
    if (i == j)
        return A[i - 1];
    return 0;
}

int main()
{

    int A[5];
    int n = 5;
    int x;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            set(A, i, j, x);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << get(A, i, j) << " ";
        }
        cout << endl;
    }
    return 0;
}