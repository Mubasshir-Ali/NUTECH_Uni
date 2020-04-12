#include<iostream>
using namespace std;
main()
{
	int a,b,x,t;
	cout<<"Enter two numbers:";
	cin>>a>>b;
	if(a>b)
	{
		t=a;
		a=b;
		b=t;

	}
	
	cout<<"Prime numbers between:" <<a<<"and"<<b<<"are:"<<endl;
	for( int i=a;i<=b;i++)
	{
		x=0;
		for(int j=1;j<=i;j++)
		{if (i%j==0)
		x++;
		}
		if (x==2)
		cout<<i<<"  ";
	}
}

