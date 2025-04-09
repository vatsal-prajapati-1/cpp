#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int mx = INT_MIN;
    cout << "Enter the elements of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        // if(arr[j]>mx) mx = arr[j];
        mx = max(mx, arr[j]);
    }
    cout << mx;
}