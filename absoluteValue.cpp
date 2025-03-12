#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number : ";
    cin >> n;
    // if (n >= 0)
    // {
    //     cout << n;
    // }
    // else
    // {
    //     cout << -n;
    // }

    // if you want to change n into absolute value
    if (n < 0)
        n = -n;
    cout << n;
}