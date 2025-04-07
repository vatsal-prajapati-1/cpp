#include <iostream>
using namespace std;
void parameterized(int n, int sum)
{
    if (n == 0)
    {
        cout << sum;
        return;
    }
    parameterized(n - 1, sum + n);
}
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    parameterized(n, 0);
}