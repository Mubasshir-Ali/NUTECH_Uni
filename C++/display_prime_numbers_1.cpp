#include <iostream>
using namespace std;

int main()
{
    int n1, n2, i, a;

    cout<<"Enter Number 1 : ";
	cin>>n1;
	cout<<"Enter Number 2 : ";
	cin>>n2;

    cout << "Prime Numbers Between " << n1 << " And " << n2 << " Are : ";

    while (n1 < n2)
    {
        a = 0;

        for(i = 2; i <= n1/2; ++i)
        {
            if(n1 % i == 0)
            {
                a = 1;
                break;
            }
        }

        if (a == 0)
            cout << n1 << " ";

        ++n1;
    }

    return 0;
}
