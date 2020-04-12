#include<iostream>
using namespace std;

int main(){
	int num1, num2, temp, i;
	
	cout<<"Enter The 1st Number : ";
	cin>>num1;
	cout<<"Enter The 2nd Number : ";
	cin>>num2;
	
	cout<<"The Prime Number Between "<<num1<<" And "<<num2<<" Is : ";
	
	while(num1 < num2){
		temp=0;
		
		for(i=2; i<=num1/2; i++){
			if(num1 % i==0){
				temp=1;
				break;
			}
		}
		
		if(temp==0)
			cout<<num1<<" ";
			
		num1++;
	}
}
