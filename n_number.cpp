#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n : ";
    cin >> n;
    // for(int i=n; i<=n*10; i+=n ) {
    //     cout<<i<<" ";
    // }
    for (int i = 1; i < 11; i++)
    {
        cout << n * i << " ";
    }
}