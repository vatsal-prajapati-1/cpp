#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    if (n % 5 == 0 && n % 3 == 0)
    {
        cout << "Divisible by 5 or 3" << endl;
    }
    if (n % 15 == 0)
    {
        cout << "Divisible by 5 and 3" << endl;
    }
    else
    {
        cout << "Not Divisible by 5 and 3" << endl;
    }
}