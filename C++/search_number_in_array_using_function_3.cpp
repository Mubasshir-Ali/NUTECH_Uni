#include<iostream>
using namespace std;

void search();

intmain(){
	int arr[10], i, n;
	
	cout<<"Enter The Size Of Array : ";
	cin>>n;
}

void search(){
	int i, n, num, position, nf=0;
	
	for(i=0; i<n; i++){
		cout<<"Enter The Number"<<(i+1)<<" : ";
		cin>>arr[i];
	}
	
	cout<<"Enter The Search Element : ";
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
