#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    return a * power(a, b - 1);
}
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << a << " raised to the power " << b << " is " << power(a, b);
}