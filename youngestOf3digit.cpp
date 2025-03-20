#include <iostream>
using namespace std;
int main()
{
    int ram, shyam, ajay;
    cout << "Enter the age of ram : ";
    cin >> ram;
    cout << "Enter the age of shyam : ";
    cin >> shyam;
    cout << "Enter the age of ajay : ";
    cin >> ajay;
    if (ram < shyam)
    {
        if (ram < ajay)
        {
            cout << "ram age is youngest " << ram << endl;
        }
        else
        {
            cout << "ajay age is youngest " << ajay << endl;
        }
    }
    else
    {
        if (shyam < ram)
        {
            cout << "shyam age is youngest " << shyam << endl;
        }
        else
        {
            cout << "ajay age is youngest " << ajay << endl;
        }
    }
}