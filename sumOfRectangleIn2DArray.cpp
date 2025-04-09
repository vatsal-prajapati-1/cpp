#include <iostream>
using namespace std;
int main()
{
    int r, c;
    cout << "Enter the number of row : ";
    cin >> r;
    cout << "Enter the number of column : ";
    cin >> c;
    int arr[r][c];
    int sum = 0;
    int l1, r1, l2, r2;
    cout << "Enter top-left corner (row col): ";
    cin >> l1 >> r1;
    cout << "Enter bottom-right corner (row col): ";
    cin >> l2 >> r2;
    cout << "Enter the elements of the array : " << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "Element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    for (int i = l1; i < l2; i++)
    {
        for (int j = r1; j < r2; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << sum;
}