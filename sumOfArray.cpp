#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    int sum = 0;

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int j = 0; j < n; j++)
    {
        sum += arr[j];
    }

    cout << "The sum of the array elements is: " << sum << endl;
}