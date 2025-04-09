#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int x = 5;
    int count = 0;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (arr[j] > x)
            count++;
    }
    cout << count;
}