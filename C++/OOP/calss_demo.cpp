#include<iostream>
#include<stdio.h>
#include<conio.h>

using namespace std;

class student
{
	private:
		int gpa,dob;
	
	public:
		get_dob()
		{
			cout<<"Enter DOB Of Student : ";
			cin>>dob;
			cout<<"Student DOB : "<<dob<<endl;
		}
};

main()
{
	student s1;
	s1.get_dob();
}
