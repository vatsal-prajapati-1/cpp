#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the marks : ";
    cin >> n;
    if (n >= 81 && n <= 100)
    {
        cout << "Very Good";
    }
    else if (n >= 61)
    {
        cout << "Good";
    }
    else if (n >= 41)
    {
        cout << "Average";
    }
    else
    {
        cout << "fail";
    }
}