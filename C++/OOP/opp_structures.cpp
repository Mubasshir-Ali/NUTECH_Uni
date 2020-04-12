#include<iostream>
using namespace std;

struct student{
	string name;
	char fee_st;
	float gpa;
	int roll_no;
};

main(){
	struct student s1,s2,s3;
	
	//student s;
	
	cout<<"Student 1 Name : ";
	cin>>s1.name;
	cout<<"Student 1 Fee Status : ";
	cin>>s1.fee_st; 
	cout<<"Student 1 GPA : ";
	cin>>s1.gpa;
	cout<<"Student 1 Roll No : ";
	cin>>s1.roll_no;
	
	cout<<"Student 2 Name : ";
	cin>>s2.name;
	cout<<"Student 2 Fee Status : ";
	cin>>s2.fee_st;
	cout<<"Student 2 GPA : ";
	cin>>s2.gpa;
	cout<<"Student 2 Roll No : ";
	cin>>s2.roll_no;
	
	cout<<"Student 3 Name : ";
	cin>>s3.name;
	cout<<"Student 3 Fee Status : ";
	cin>>s3.fee_st;
	cout<<"Student 3 GPA : ";
	cin>>s3.gpa;
	cout<<"Student 3 Roll No : ";
	cin>>s3.roll_no;
	
	/*s1.name = "Sajid";
	s1.fee_st = 'y';
	s1.gpa = 3.5;
	s1.roll_no = 25;
	
	cout<<s1.name;*/
}
