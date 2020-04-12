 #include<iostream>
using namespace std;
main()
{
	int a,b,c,legs;
	// a=hens, b=sheep, c=cow
	cout<<"Enter number of hens=";
	cin>>a;
	cout<<"Enter number of sheep=";
	cin>>b;
	cout<<"Enter number of cows=";
	cin>>c;
	legs= (a*2)+(b*4)+(c*4);
	 
	cout<<" Total number of legs are="<<legs;
}

