#include <iostream>
using namespace std;

int main()
{
    int n, a1 = 0, a2 = 1, nextnum = 0;

    cout << "Enter the Number: ";
    cin>>n;

    cout << "The Fibonacci Series: ";

    for (int i = 1; i <= n; ++i)
    {
        
        if(i == 1)
        {
            cout << " " << a1;
            continue;
        }
        if(i == 2)
        {
            cout << a2 << " ";
            continue;
        }
        nextnum = a1 + a2;
        a1 = a2;
        a2 = nextnum;
         cout << nextnum << " ";
    }
    return 0;
}
