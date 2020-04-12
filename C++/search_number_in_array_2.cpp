#include<iostream>

using namespace std;

int main(){
	int arr[10];
	int i, n, num, position, nf=0;
	
	cout<<"Enter Size of Array : ";
	cin>>n;
	
	for(i=0; i<n; i++){
		cout<<"Enter The Number "<<(i+1)<<" : ";
		cin>>arr[i];
	}
	
	cout<<"Enter The Search Number is : ";
	cin>>num;
	
	for(i=0; i<n; i++){
		if(arr[i]==num){
			position=i+1;
			nf=1;
			break;
		}
	}
	
	if(nf==0){
		cout<<"\nNumber Is Not Found";
	}
	else{
		cout<<"\nNumber "<<num<<" Position Is "<<position;
	}
	return 0;
}
