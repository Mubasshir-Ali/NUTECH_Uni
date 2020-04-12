#include<iostream>
using namespace std;

int main(){
	int n1, n2, temp, i;
	
	cout<<"Enter The First Number : ";
	cin>>n1;
	cout<<"Enter The Second Number : ";
	cin>>n2;
	
	cout<<"The Prime Number Between "<<n1<<" And "<<n2<<" Is : ";
	
	while(n1 < n2){
		temp = 0;
		
		for(i=2; i<=n1/2; i++){
			if(n1 % i==0){
				temp=1;
				break;
			}
		}
		
		if(temp==0)
			cout<<n1<<" ";
		n1++;
	}
	return 0;
	
}
