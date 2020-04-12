#include<iostream>
using namespace std;

float fahrenheit(float);
float celsius(float);

main()
{
	int a;
	
	cout<<"Chose Any One Option From Given Below :";
	sub:
		cout<<"\n 1--Calculate Fahrenheit \n";
		cout<<"\n 2--Calculate Celsius \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		
		switch(a)
		{
			case 1:
				float fahrenheit();
				break;
				
			case 2:
				float celsius();
				break;
				
			case 0:
				//exit(EXIT_SECCESS);
				break;
				
			default:
				cout<<"You Have Entered Wrong Option. Try Again!\n"<<endl;
				goto sub;
				break;
		}
}

float fahrenheit(float temp)
{
	float temp;
	char choice;
	
	cout<<"Enter Tempreture : ";
	cin>>temp;
	cout<<"Press c or C To Convert To Celcius : ";
	cin>>choice;
	
	fahrenheit(temp);
	if(choice == 'c' || choice == 'C')
	{
		cout<<temp<<"Degrees Fahrenheit Converted To Celsius Is: "<<fahrenheit(temp);
	}
	
	return ((9/5*temp)+(32));
}
