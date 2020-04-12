#include<iostream>

using namespace std;

main(){
	int x;
	char d='Y';
	
	do{
	cout<<"Enter Any Number = ";
	cin>>x;

	if (x%2 == 0){
		cout<<"Even Number:"<<x;
		cout<<"Enter 'Y' if you want to continue and other key to exit:";
		cin>>d;
	}
	else if(x%2 != 0){
		cout<<"Odd Number"<<x;
		cout<<"Enter 'Y' if you want to continue and other key to exit:";
		cin>>d;
	}
	else{
		cout<<"Plz Enter Correct Number ";
	}
	}
	while(d=='Y');
}
