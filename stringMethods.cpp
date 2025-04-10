#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "hey world";
    cout << s << endl;
    s.push_back('!');
    cout << s << endl;
    s.pop_back();
    cout << s << endl;
    s.append(" user");
    cout << s << endl;
    s.clear();
    cout << s.length() << endl;
    s = s + " is good";
    cout << s << endl;
    reverse(s.begin(), s.end());
    cout << s << endl;
}