#include<iostream>
using namespace std;

int main(){
	int n, i, j, sum=0, totalsum;
	cout<<"Enter Any Number : ";
	cin>>n;
	
	for(i=1; i<=n; i++){
		totalsum = 0;
		for(j=1; j<=i; j++){
			sum += j;
			totalsum += j;
			
			cout<<j;
			
			if(j<i){
				cout<<"+";
			}
		}
		cout<<"="<<totalsum<<endl;
	}
	cout<<"The Sum Of The Series Is = "<<sum<<endl;
}
