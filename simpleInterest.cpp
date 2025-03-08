#include <iostream>
using namespace std;
int main()
{
    float principal = 1000;
    float rate = 30;
    float time = 3;
    float simpleInterest = (principal * rate * time) / 100;
    cout << "Simple Interest : " << endl;
    cout << simpleInterest << endl;
} 