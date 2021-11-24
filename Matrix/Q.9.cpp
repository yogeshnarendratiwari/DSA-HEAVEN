// Rotate matrix by 90 degrees

#include <iostream>
using namespace std;
int main()
{

  int arr[2][2];

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> arr[i][j];
    }
  }
  cout << endl;
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cout << arr[1 - j][i] << " ";
    }
    cout << endl;
  }
}