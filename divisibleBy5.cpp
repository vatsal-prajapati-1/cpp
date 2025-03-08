#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if (n % 5 == 0)
        cout << "Number is divisible by 5" << endl;
    if (n % 5 != 0)
        cout << "Number is not divisible by 5" << endl;
}