#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    int product = 1;
    while (n != 0)
    {
        int ld = n % 10;
        n /= 10;
        product *= ld;
    }
    cout << product;
}