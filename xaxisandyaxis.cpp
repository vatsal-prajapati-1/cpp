#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the coordinates of x axis : ";
    cin >> x;
    cout << "Enter the coordinates of y axis : ";
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "The point is at the Origin." << endl;
    }
    else if (y == 0)
    {
        cout << "The point lies on the X-axis." << endl;
    }
    else if (x == 0)
    {
        cout << "The point lies on the Y-axis." << endl;
    }
    else if (x > 0 && y > 0)
    {
        cout << "The point lies in the 1st Quadrant." << endl;
    }
    else if (x < 0 && y > 0)
    {
        cout << "The point lies in the 2nd Quadrant." << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << "The point lies in the 3rd Quadrant." << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << "The point lies in the 4th Quadrant." << endl;
    }
}