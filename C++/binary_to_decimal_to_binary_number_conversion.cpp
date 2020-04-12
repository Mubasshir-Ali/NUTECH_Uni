//C++ program to convert binary to decimal
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int a;
	long long num;
    int decimalNum, i, rem;
	
	cout<<"Chose Any One Option From Given Below :";
	sub:
		
		do
		{
		cout<<"\n 1--Binary To Decimal \n";
		cout<<"\n 2--Decimal To Binary \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		
		if(a==0)
		{
			break;
		}
		
		if(a==1)
		{
			cout<<"Enter Binary Number : ";
			cin>>a;
		
		while (num != 0)
   		{
      rem = num % 10;
      num /= 10;
      decimalNum += rem * pow(2, i);
      ++i;
   		}
   			cout << "Equivalent Decimal number: " << decimalNum << endl;
		}
		
		else if(a==2)
		{
			cout<<"Enter Decimal Number : ";
			cin>>a;
			
			while (num != 0)
   		{
      rem = num % 10;
      num /= 10;
      decimalNum += rem * pow(2, i);
      ++i;
   		}
		}
		
	}
	
	while(a!=0);
}
