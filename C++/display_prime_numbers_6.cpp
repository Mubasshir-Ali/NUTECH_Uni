#include<iostream>
using namespace std;

int main()
{
	int num1, num2, temp, a, i, j;
	
	cout<<"Enter The 1st Number : ";
	cin>>num1;
	cout<<"Enter The 2nd Number : ";
	cin>>num2;
	
	if(num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	cout<<"the Prime Number Between "<<num1<< " And "<< num2<<" Are : ";
	
	for(i=num1; i<=num2; i++)
	{
		a = 0;
		
		for(j=1; j<=i; j++)
		{
			if(i % j == 0)
			a++;
		}
		
		if(a==2)
		{
			cout<<i<<" ";
		}
	}
}
