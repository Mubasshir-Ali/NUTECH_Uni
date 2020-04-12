#include<iostream>
using namespace std;

int main(){
	int low, high, i, temp;
	
	cout<<"Enter 1st Number : ";
	cin>>low;
	cout<<"Enter 2nd Number : ";
	cin>>high;
	
	cout<<"Prime Number B/W "<<low<<" And "<<high<<" Is : ";
	
	while(low < high){
		temp=0;
		
		for(i=2; i<=low/2; i++){
			if(low % i==0){
				temp=1;
				break;
			}
		}
		
		if(temp==0)
			cout<<low<<" ";
			
		low++;
	}
}
