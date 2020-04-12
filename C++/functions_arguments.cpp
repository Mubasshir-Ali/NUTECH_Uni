#include <iostream>

using namespace std;

int main(){
	int a,b,x;
	cin>>a>>b;
	int add(int, int);	//Function Declaration
	x = add(a,b);		//Function Calling
	cout<<x<<endl;
	
	cin>>a>>b;
	x = add(a,b);
	cout<<x<<endl;
}
//Function Add
int add(int c, int d){
	int e;
	e =c+d;
	return(e);
}
