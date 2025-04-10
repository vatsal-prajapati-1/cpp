#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s = "raghav";
    cout << s << endl;
    // reverse(s.begin() + 2, s.begin() + 5);
    reverse(s.begin() + 2, s.begin() + 6);
    cout << s << endl;
}