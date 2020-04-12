#include<iostream>

using namespace std;

main(){
	float a,b;
	char op;
	cout<<"Enter First Value = ";
	cin>>a;
	cout<<"Enter Second Value = ";
	cin>>b;
	cout<<"Enter Operation You Want To Perform = ";
	cin>>op;
	
	switch(op){
		case '+':
			cout<<"The Sum Of Numbers Is:"<<a+b<<endl;
			break;
			
			case '-':
			cout<<"The Difference Of Numbers Is:"<<a-b<<endl;
			break;
			
			case '*':
			cout<<"The Product Of Numbers Is:"<<a*b<<endl;
			break;
			
			case '/':
			cout<<"The Quotient Of Numbers Is:"<<a/b<<endl;
			break;
			
			/*case '%':
			cout<<"The Remainder Of Numbers Is:"<<a%b<<endl;
			break;*/
			
			default:
				cout<<"The Operator Is Incorrect";
	}
}
