// Rotate matrix by 90 degrees

#include <iostream>
using namespace std;
int main()
{

    int arr[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            int temp;
            temp = arr[i][j];
            arr[i][j] = arr[2 - j][i];
            arr[2 - j][i] = temp;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<  arr[i][j] << " ";
        }
        cout<<endl;
    }
}