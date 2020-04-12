#include<iostream>

using namespace std;

main(){
	float a,b;
	char op, d = 'Y';
	
	while(op == 'Y')
	{
		cout<<"Enter First Value = ";
		cin>>a;
		cout<<"Enter Second Value = ";
		cin>>b;
		cout<<"Enter Operation You Want To Perform = ";
		cin>>op;
		
		if(op=='+'){
			cout<<"The Sum Of Numbers Is:"<<a+b<<endl;
		}
		
		else if(op=='-'){
			cout<<"The Difference Of Numbers Is:"<<a-b<<endl;
		}
		
		else if(op=='*'){
			cout<<"The Product Of Numbers Is:"<<a*b<<endl;
		}
		
		else if(op=='/'){
			cout<<"The Quotient Of Numbers Is:"<<a/b<<endl;
		}
		
		else{
			cout<<"The Operator Is Incorrect";
		}
			cout<<"Enter 'Y' and 'y' if you want to continue and other key to exit:";
			cin>>d; 
			//op=0;
	}
}
