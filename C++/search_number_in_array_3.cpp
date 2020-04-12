#include<iostream>

using namespace std;

int main(){
	int arr[10];
	int i, n, num, nf=0, position;
	
	cout<<"Enter The Size Of Array : ";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<"Enter The Number "<<(i+1)<<" : ";
		cin>>arr[i];
	}
	
	cout<<"Enter The Search Number : ";
	cin>>num;
	
	for(i=0; i<n; i++){
		if(arr[i]==num){
		nf=1;
		position=i+1;
		break;
		}
	}
	
	if(nf==0){
		cout<<"Number Not Found";
	}
	else{
		cout<<"Number "<<num<<" Position Is "<<position;
	}
	return 0;
}
