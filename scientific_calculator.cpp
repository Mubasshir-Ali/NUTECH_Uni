#include "stdafx.h"
#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
void sum();
void product();
void sub();
void div();
void remainder();
void square();
void cube();
void cos();
void sin();
void tan();
void cosh();
void sinh();
void tanh();
void acos();
void asin();
void atan();
void exp();
void log();
void log10();
void atan2();
void pow();
int main()
{
cout<<"i am going to use a functional aproach to make a calculator"<<endl;
long func;
cout<<"enter function you want to perform(+,*,D,-,R,S,C,c,s,t,h,H,T,A,b,d,E,L,l,N,P): \n";
cout<<"KEY :\n";
cout<<"`+' is for addition\n";
cout<<"`*' is for multiplication\n";
cout<<"`D' is for division\n";
cout<<"`-' is for subtraction \n";
cout<<"`R' is for remainder\n";
cout<<"`S' is for square\n";
cout<<"`C' is for cube\n";
cout<<"`c' is for cosine\n";
cout<<"`s' is for sine\n";
cout<<"`t' is for tangent\n";
cout<<"`T' is for hyperbolic tangent\n";
cout<<"`h' is for hyperbolic cosine\n";
cout<<"`H' is for hyperbolic sine\n";
cout<<"`A' is for arc cosine\n";
cout<<"`b' is for arc sine\n";
cout<<"`d' is for arc tangential\n";
cout<<"`E' is for exponent\n";
cout<<"`L' is for logarithm\n";
cout<<"`l' is for common logarithm i.e log10\n";
cout<<"`N' is for atan2\n";
cout<<"`P' is for power\n";
func=getche();
if (func=='+')
{
sum();
cout<<"***********\n";
}
else if (func=='*')
{
product();
cout<<"************\n";
}
else if (func=='-')
{
sub();
cout<<"**************\n";
}
if (func=='D')
{
div();
cout<<"*********\n";
}
else if (func=='R')
{
remainder();
cout<<"***********\n";
}
else if (func=='S')
{
square();
cout<<"*********\n";
}
else if (func=='C')
{
cube();
cout<<"************\n";
}
else if (func=='c')
{
cos();
cout<<"************\n";
}
else if (func=='s')
{
sin();
cout<<"***********\n";
}
else if (func=='t')
{
tan();
cout<<"**************\n";
}
else if (func=='h')
{
	cosh();
	cout<<"************\n";
}
else if (func=='H')
{
sinh();
cout<<"**********\n";
}
else if (func=='T')
{
tanh();
cout<<"**********\n";
}
else if (func=='A')
{
	acos();
	cout<<"*********\n";
}
else if(func=='b')
{
asin();
cout<<"***********\n";
}
else if (func=='d')
{
	atan();
	cout<<"***********\n";
}
else if (func=='E')
{
	exp();
	cout<<"**********\n";
}
else if (func=='L')
{
	log();
	cout<<"**********\n";
}
else if (func=='l')
{
log10();
cout<<"*********\n";
}
else if (func=='N')
{
	atan2();
	cout<<"*******\n";
}
else if (func=='P')
{
	pow();
	cout<<"********\n";
}
getche();
	return 0;
}
void sum()
{
int a,b,sum;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
sum=a+b;
cout<<"sum is"<<sum<<endl;
} 
void product()
{
int a,b,product;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
product=a*b;
cout<<"product is"<<product<<endl;
}
void sub()
{
int a,b,sub;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
sub=a-b;
cout<<"subtraction is"<<sub<<endl;
}
void div()
{
int a,b,div;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
div=a/b;
cout<<"division is"<<div<<endl;
}
void remainder()
{
int a,b,remainder;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter the second number\n";
cin>>b;
remainder=a*b;
cout<<"remainder is"<<remainder<<endl;
}
void square()
{
int a,square;
cout<<"\nenter the number\n";
cin>>a;
square=a*a;
cout<<"square is"<<square<<endl;
}
void cube()
{
int a,cube;
cout<<"\nenter the number\n";
cin>>a;
cube=a*a*a;
cout<<"cube is"<<cube<<endl;
}
void cos()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = cos (a*PI/180);
cout<<"the cosine of "<<a<<" is "<<result<<endl;
}
void sin()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = sin (a*PI/180);
cout<<"the sine of "<<a<<" is "<<result<<endl;
}
void tan()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = tan (a*PI/180);
cout<<"the tan of the "<<a<<" is "<<result<<endl;
}
void cosh()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = cosh (a);
cout<<"the hyperbolic cosine of "<<a<<" is "<<result<<endl;
}
void sinh()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = sinh (a);
cout<<"the hyperbolic sine of "<<a<<" is "<<result<<endl;
}
void tanh()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = tanh (a);
cout<<"The hyperbolic tangent of "<<a<<" is "<<result<<endl;
}
void acos()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = acos (a) * 180.0 / PI;
cout<<"The arc cosine of "<<a<<" is "<<result<<endl;
}
void asin()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = asin (a) * 180.0 / PI;
cout<<"The arc sine of "<<a<<" is "<<result<<endl;
}
void atan()
{
double a,result,PI=3.14159265;
cout<<"\nenter the angle\n";
cin>>a;
result = tanh (a);
cout<<"The arc tangential of "<<a<<" is "<<result<<endl;
}
void exp()
{
double a,result;
cout<<"\nenter the number\n";
cin>>a;
result = exp (a);
cout<<"The exponential value of "<<a<<" is = "<<result<<endl;
}
void log()
{
double a, result;
cout<<"\nenter the value to take a log \n";
cin>>a;
result = log (a);
cout<<"The logarithm of "<<a<<" is "<<result<<endl;
}
void log10()
{
double a, result;
cout<<"\nenter the value to take a log \n";
cin>>a;
result = log10 (a);
cout<<"The common logarithm of "<<a<<" is "<<result<<endl;
}
void atan2()
{
float a,b,result,PI=3.14;
cout<<"\nenter the first number\n";
cin>>a;
cout<<"\nenter second the number\n";
cin>>b;
result = atan2 (a,b) * 180 / PI;
cout<<"The arc tangent for "<<a<<" and "<<b<<" is "<<result<<endl;
}
void pow()
{
int a,b,pow;
cout<<"\nenter the number\n";
cin>>a;
cout<<"\nenter the power\n";
cin>>b;
(a^b)=pow (a,b);
cout<<"\n"<<a<<"raise to power"<<b<<"is"<<(a^b);
}