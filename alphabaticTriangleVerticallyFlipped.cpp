#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of rows : ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int g = 1; g <= i; g++)
        {
            cout << (char)(g + 64) << " ";
        }
        cout << endl;
    }
}