#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int b[n];
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        b[j] = arr[n - 1 - j];
    }
    for (int j = 0; j < n; j++)
    {
        cout << b[j] << " ";
    }
}