#include<iostream>

using namespace std;

int main(){
	int arr[10];
	int i, j, n, num, nf=0, position;
	
	cout<<"Enter Array Size : ";
	cin>>n;
	cout<<"Enter Array Number : ";
	
	 for(i=0; i<n; i++){
	 	
	 	cin>>arr[i];
	 }
	 
	 cout<<"Enter Search Number : ";
	 cin>>num;
	 
	 for(i=0; i<n; i++){
	 	if(arr[i]==num){
	 		nf=1;
	 		position=i+1;
	 		break;
		 }
	 }
	 
	 if(nf==0){
	 	cout<<"\n Number Not Found";
	 }
	 else{
	 	cout<<"\nNumber "<<num<<" Position Is "<<position;
	 }
	 return 0;
}
