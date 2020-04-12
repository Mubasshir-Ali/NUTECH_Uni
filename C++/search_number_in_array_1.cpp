#include<iostream>

using namespace std;

int main(){
	int arr[10];
	int i, n, num, nf=0;
	
	cout<<"Enter Array Size : ";
	cin>>n;
	
	 for(i=0; i<n; i++){
	 	cout<<"Enter Array Number "<<(i+1)<<" : ";
	 	cin>>arr[i];
	 }
	 
	 cout<<"Enter Search Number : ";
	 cin>>num;
	 
	 for(i=0; i<n; i++){
	 	if(arr[i]==num){
	 		nf=1;
	 		//position=i+1;
	 		break;
		 }
	 }
	 
	 if(nf==0){
	 	cout<<"\n Number Not Found";
	 }
	 else{
	 	cout<<"\nNumber Found "<<num;
	 }
	 return 0;
}
