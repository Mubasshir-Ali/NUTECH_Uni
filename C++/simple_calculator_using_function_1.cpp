#include<iostream>
#include<conio.h>
using namespace std;

double add(double,double);
double sub(double,double);
double multi(double,double);
double divide(double,double);

int main()
{
    double sum=0,subtract=0,multy=0,div=0,number1=0,number2=0;
    int a;
    cout<<"Please Select any one from below \n";
    do
    {
    cout<<"\n1--Addition \n";
    cout<<"2--Subtraction\n";
    cout<<"3--Multiplication\n";
    cout<<"4--Division\n";
    cout<<"0--Close\n";
    cin>>a;
    if(a==0)
        {
            break;
        }
    cout<<"Enter number 1 = ";
     cin>>number1;
    cout<<"Enter number 2 = ";
    cin>>number2;
    if(a==1)
    {
        sum=add(number1,number2);
        cout<<"Sum is = "<<sum;
     }
    else if(a==2)
    {
        subtract=sub(number1,number2);
        cout<<"Subtraction is = "<<subtract;
    }
    else if(a==3)
    {
        multy=multi(number1,number2);
         cout<<"Multiplication is = "<<multy;
    }
    else if (a==4)
    {
        div=divide(number1,number2);
        cout<<"Division is = "<<div;
    }
     }
    while(a!=0);
    getch();
}
// define of sum
double add(double no1,double no2)
{
    double sum;
    sum=no1+no2;
    return sum;
}
// define of Subtraction
double sub(double no1,double no2)
 {
    double sub;
    sub=no1-no2;
    return sub;
}
// define of multiplication
double multi(double no1,double no2)
{
    double multi;
    multi=no1*no2;
    return multi;
}
// define of Division
 double divide(double no1,double no2)
{
    double div;
    div=no1/no2;
    return div;
}
