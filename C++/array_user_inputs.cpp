#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

int main(){
	int x[5];
	int i,j;
	
	for(i=0; i<5; i++){
		cout<<"Enter Your Number : ";
		cin>>x[i];
	}
	
	cout<<"The Number Of Array Is : ";
	for(i=0; i<5; i++){
		cout<<x[i];
	}
	
	cout<<endl<<"The Duplicate num of array is : ";
	for(i=0; i<5; i++){
		for(j=i+1; j<5; j++){
			if(x[i]==x[j]){
				cout<<x[i];
			}
		}
	}
}
