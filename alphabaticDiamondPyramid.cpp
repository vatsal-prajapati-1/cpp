#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int g = 1; g <= 2 * i - 1; g++)
        {
            cout << (char)(g + 64) << " ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int g = 1; g <= 2 * i - 1; g++)
        {
            cout << (char)(g + 64) << " ";
        }
        cout << endl;
    }
}