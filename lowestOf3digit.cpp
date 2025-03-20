#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter the first number : ";
    cin >> a;
    cout << "Enter the second number : ";
    cin >> b;
    cout << "Enter the third number : ";
    cin >> c;
    if (a < b && a < c)
    {
        cout << a << " is lowest number" << endl;
    }
    else if (b < a && b < c)
    {
        cout << b << " is lowest number" << endl;
    }
    else
    {
        cout << c << " is lowest number" << endl;
    }
}