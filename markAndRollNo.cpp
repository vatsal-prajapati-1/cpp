#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter number of rows : ";
    cin >> r;
    cout << "Enter number of column : ";
    cin >> c;
    int arr[r][c];
    cout << "Enter the element of the array : " << endl;
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
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}