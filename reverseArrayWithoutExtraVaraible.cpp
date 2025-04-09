#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array : ";
    cin >> n;
    int arr[n];
    int g = 0;
    int j = n - 1;
    cout << "Enter the element of the array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (g < j)
    {
        int temp = arr[g];
        arr[g] = arr[j];
        arr[j] = temp;
        g++;
        j--;
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}