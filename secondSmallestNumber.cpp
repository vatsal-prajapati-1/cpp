#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int mn = INT_MAX;
    int smn = INT_MAX;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        mn = min(mn, arr[j]);
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != mn)
            smn = min(smn, arr[j]);
    }
    cout << smn;
}