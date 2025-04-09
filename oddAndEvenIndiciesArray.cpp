#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int sumEven = 0;
    int sumOdd = 0;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
            sumEven += arr[j];
        else
            sumOdd += arr[j];
    }
    int difference = sumEven - sumOdd;
    cout << "Difference (Even indices - Odd indices): " << difference << endl;
}