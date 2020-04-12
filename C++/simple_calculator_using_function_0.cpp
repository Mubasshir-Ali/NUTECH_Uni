#include <iostream>
	using namespace std;

	double func, Sum(), Mult(), Subt(), Div(), Raise(), Roots(), Square(), Avg(), Quit;

	int main()

	{

	    double result;

	    cout<<"Select one of the following options: "<<endl;

	    cout<<"\t 1- Add"<<endl;

	    cout<<"\t 2- Multiplication"<<endl;

	    cout<<"\t 3- Subtract"<<endl;

	    cout<<"\t 4- Division"<<endl;

	    cout<<"\t 5- Raise to power"<<endl;

	    cout<<"\t 6- Roots of Polynomial of Second Degree"<<endl;

	    cout<<"\t 7- Square Root"<<endl;

	    cout<<"\t 8- Average"<<endl;

	    cout<<"\t 9- Quit"<<endl;

	    cout<<"Enter a option: ";

	    cin>>func;
	    
	    result=Mult();

	    cout<<"Result is "<<result<<endl;

	    system("pause");

	    return 0;

	}

	double Mult()

	{

	       int n, count;

	       double total=1,num;

	       cout<<"How many numbers do you want to calculate: ";

	       cin>>n;

	       for (count=0;count<n;count++)

	       {

	           cout<<"Enter a value: ";

	           cin>>num;

	           total= total*num;

	           }

	       return total;

	           }
