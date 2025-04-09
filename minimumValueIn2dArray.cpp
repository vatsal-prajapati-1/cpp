#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of row : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    int arr[r][c];
    int mn = INT_MAX;
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            mn = min(mn, arr[i][j]);
        }
    }
    cout << mn;
}