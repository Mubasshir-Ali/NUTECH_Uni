#include<iostream>
using namespace std;

double sgpa();
double cgpa();

int main(){
	double i, n, per_subj_gpa, total_sgpa, total_cgpa, total_subject, total_credit,enter_subject, enter_credit_hour;
	int a;
	cout<<"Enter Any One Option From Given Below :";
	
	do{
		cout<<"\n 1--Calculate SGPA \n";
		cout<<"\n 2--Calculate CGPA \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		if(a==0)
		{
			break;
		}
		
		if(a==1){
			cout<<"Enter Total Subjects : ";
			cin>>total_subject;
		
		for(i=1; i<=total_subject; i++){
			cout<<"Enter Per Subject Credit Hour : ";
			cin>>enter_credit_hour;
			
			
		}
		for(n=1; n<=total_subject; n++){
			cout<<"Enter Per Subject GPA : ";
			cin>>per_subj_gpa;
		}
		
		total_sgpa = (enter_credit_hour*per_subj_gpa)/total_credit;
		}
		else if(a==2){
			continue;
		}
		
	}
	
	while(a!=0);
}

double sgpa(){
	
}
