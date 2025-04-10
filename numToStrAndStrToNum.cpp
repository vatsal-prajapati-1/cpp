#include <iostream>
using namespace std;
int main()
{
    int n = 5548461;
    cout << n << endl;
    string s = to_string(n);
    s += "dasf";
    cout << s << endl;
    string str = "12344566";
    cout << str << endl;
    int x = stoi(str);
    cout << x << endl;
}