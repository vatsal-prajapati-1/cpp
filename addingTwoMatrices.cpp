#include <iostream>
using namespace std;
int main()
{
    int r1, c1, r2, c2;
    cout << "Enter the 1st number of row : ";
    cin >> r1;
    cout << "Enter the 1st number of column : ";
    cin >> c1;
    cout << "Enter the 2nd number of row : ";
    cin >> r2;
    cout << "Enter the 2nd number of column : ";
    cin >> c2;
    int arr1[r1][c1];
    int arr2[r2][c2];
    int sum[r1][c1];
    cout << "Enter the elements of the first array : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Element at position (" << i << ", " << j << "): ";
            cin >> arr1[i][j];
        }
    }
    cout << "Enter the elements of the second array : " << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Element at position (" << i << ", " << j << "): ";
            cin >> arr2[i][j];
        }
    }

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    cout << "The result of adding the two arrays is : " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << sum[i][j] << " ";
        }
        cout << endl;
    }
}