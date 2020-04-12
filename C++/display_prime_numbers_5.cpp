#include<iostream>
using namespace std;

main()
{
	int a,b,x,t;
	cout<<"Enter Two Numbers : ";
	cin>>a>>b;
	if(a>b)
	{
		t = a;
		a = b;
		b = t;
	}
	cout<<"Prime Numbers Between "<<a<<" And "<<b<<" Are : ";
	
	for(int i=a; i<=b; i++)
	{
		x = 0;
		for(int j=1; j<=i; j++)
		{
			if(i % j == 0)
			x++;
		}
		if(x==2)
		cout<<i<<" ";
	}
}
