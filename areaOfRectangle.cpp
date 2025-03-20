#include <iostream>
using namespace std;
int main()
{
    int length;
    cout << "Enter the length of the rectangle ";
    cin >> length;
    int breadth;
    cout << "Enter the breadth of the rectangle ";
    cin >> breadth;
    int area = length * breadth;
    cout << "Enter the area of the rectangle is " << area << endl;
    int perimeter = 2 * (length + breadth);
    cout << "Enter the perimeter is " << perimeter << endl;
}