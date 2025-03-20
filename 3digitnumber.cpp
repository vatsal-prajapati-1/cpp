#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the n : ";
    cin >> n;
    if (n > 99 and n <= 999)
    {
        cout << n << " is a three digit number";
    }
    else
    {
        cout << n << " is not a three digit number";
    }
}