#include<iostream>
#include<conio.h>

using namespace std;

double add(double, double);
double sub(double, double);
double multi(double, double);
double divide(double, double);

int main(){
	double sum=0, substract=0, multy=0, div=0, num1=0, num2=0;
	int a;
	cout<<"Enter Any One Option From Given Below :";
	
	do{
		cout<<"\n 1--Addition \n";
		cout<<"\n 2--Substraction \n";
		cout<<"\n 3--Multiplication \n";
		cout<<"\n 4--Division \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		if(a==0){
			break;
		}
		cout<<"Enter Number 1 = ";
		cin>>num1;
		cout<<"Enter Number 2 = ";
		cin>>num2;
		
		if(a==1){
			sum = add(num1, num2);
			cout<<"The Ans Is = "<<sum<<endl;
		}
		else if(a==2){
			substract = sub(num1, num2);
			cout<<"The Ans Is = "<<sub<<endl;
		}
		else if(a==3){
			multy = multi(num1, num2);
			cout<<"The Ans Is = "<<multy<<endl;
		}
		else if(a==4){
			div = divide(num1, num2);
			cout<<"The Ans Is = "<<div<<endl;
		}
	}
	while(a!=0);
    getch();
}

double add(double n1,double n2)
{
    double sum;
    sum=n1+n2;
    return sum;
}
double sub(double n1,double n2)
{
    double sub;
    sub=n1-n2;
    return sub;
}
double multi(double n1,double n2)
{
    double multi;
    multi=n1*n2;
    return multi;
}
double divide(double n1,double n2)
{
    double div;
    div=n1/n2;
    return div;
}
