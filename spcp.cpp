#include <iostream>
using namespace std;
int main()
{
    int cp;
    cout << "Enter Cost Price ";
    cin >> cp;
    int sp;
    cout << "Enter Selling Price ";
    cin >> sp;
    if (sp > cp)
    {
        cout << "Profit is " << sp - cp;
    }
    else if (sp < cp)
    {
        cout << "Loss is " << cp - sp;
    }
    else
    {
        cout << "No Profit No Loss";
    }
}