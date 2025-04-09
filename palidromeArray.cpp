#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    bool isPalindrome = true;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < n / 2; j++)
    {
        if (arr[j] != arr[n - 1 - j])
            return isPalindrome = true;
    }
    if (isPalindrome)
    {
        cout << "The array is a palindrome." << endl;
    }
    else
    {
        cout << "The array is NOT a palindrome." << endl;
    }
}