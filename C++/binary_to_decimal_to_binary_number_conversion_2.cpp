#include<iostream>
using namespace std;

void BinarytoDecimal();
void DecimaltoBinary();

int main()
{
	int a;
	
	cout<<"Enter Any Option From Given Below :";
	sub:
		cout<<"\n 1--Binary To Decimal \n";
		cout<<"\n 2--Decimal To Binary \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		
		switch(a)
		{
			case 1:
				BinarytoDecimal();
				break;
			
			case 2:
				DecimaltoBinary();
				break;
			
			case 0:
				exit(EXIT_SUCCESS);
				break;
				
			default:
				cout<<"You Have Entered Wrong Option. Try Again!\n";
				goto sub;
				break;
		}
}

void BinarytoDecimal()
{
	long long num;
	int decimalnum, i, rem;
	
	cout<<"Enter Any Number : ";
	cin>>num;
	
	decimulnum = 0;
	i = o;
	
	while(num!=0){
		rem = num%10;
		num/=10;
		
	}
}
