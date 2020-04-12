#include<iostream>
#include<conio.h>
#include<stdio.h>

using namespace std;

class student
{
	private:
		char c_title;
		int c_marks;
		
	public:
		get_data()
		{
			cout<<"Enter Course Title : ";
			cin>>c_title;
			cout<<"Enter Course Marks : ";
			cin>>c_marks;
		}
};

main()
{
	student s1,s2;
	
	cout<<"Enter Data For Student 1 : "<<endl;
	s1.get_data();
	cout<<"Enter Data For Student 2 : "<<endl;
	s2.get_data();
}
