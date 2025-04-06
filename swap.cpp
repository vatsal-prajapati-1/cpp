#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter y : ";
    cin >> y;
    cout << x << " " << y << endl;
    // int temp = x;
    // x = y;
    // y = temp;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}