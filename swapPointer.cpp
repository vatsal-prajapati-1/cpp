#include <iostream>
using namespace std;
void sum(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << a << " " << b << endl;
    sum(&a, &b);
    cout << a << " " << b << endl;
}