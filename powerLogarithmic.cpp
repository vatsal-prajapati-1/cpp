#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
        return 1;
    int x = power(a, b / 2);
    if (b % 2 == 0)
        return x * x;
    else
        return x * x * a;
}
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << power(a, b);
}