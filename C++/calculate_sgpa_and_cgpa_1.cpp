#include <iostream>
#include <stdlib.h>

using namespace std;

void sgpa();
void cgpa();

//void method();

int main(){
	int a;
	
	cout<<"Enter Any One Option From Given Below :";
	sub:
		cout<<"\n 1--Calculate SGPA \n";
		cout<<"\n 2--Calculate CGPA \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		
		switch(a)
    {
        case 1:
                sgpa();
                break;

        case 2:
                cgpa();
                break;
        case 0:
                exit(EXIT_SUCCESS);
                break;

        default:
            cout<<"You Have Entered Wrong Option.Try Again!\n"<<endl;
            goto sub;
            break;
    }
}

void sgpa()
{
    int q;
    //system("cls");
    cout<<"-------------- SGPA Calculating -----------------"<<endl;
    cout<<" How many subject's gpas do you want to calculate? : ";
    cin>>q;

    float credit [q];
    float gpa [q];

    cout<<endl;
    for(int i=0;i<q;i++)
    {
        cout<<"Enter The Credit Hour For The Subject "<<i+1<<": ";
        cin>>credit[i];
        cout<<endl;
        cout<<"Enter The GPA Of The Subject "<<i+1<<": ";
        cin>>gpa[i];
        cout<<"-----------------------------------\n\n"<<endl;
    }

    float sum=0;
    float tot;
    for(int j=0;j<q;j++)
    {
        tot=credit[j]*gpa[j];
        sum=sum+tot;
    }

    float totCr=0;
    for(int k=0;k<q;k++)
    {
        totCr=totCr+credit[k];
    }

    cout<<"\n\n\nTotal GPA: "<<sum<<" . Total Credits: "<<totCr<<" .Total GPA: "<<sum/totCr<<" ."<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                cgpa();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

void cgpa()
{
    //system("cls");
    int l;
    cout<<"-------------- CGPA Calculating -----------------\n\n"<<endl;
    cout<<"How many semester results do you want input? :";
    cin>>l;
    cout<<"\n\n"<<endl;
    float semrs[l];
    int i;

    for(i=0;i<l;i++)
    {
        cout<<" Enter Semester "<<i+1<<" Result(GPA): ";
        cin>>semrs[i];
        cout<<"\n"<<endl;
    }

    float semtot=0;
    for(int j=0;j<l;j++)
    {
        semtot=semtot+semrs[j];
    }

    cout<<"******** Your CGPA is "<<semtot/l<<" **********"<<endl;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Calculate Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Your Input: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                cgpa();
                break;
        case 2:
                main();
                break;
        case 3:
                exit(EXIT_SUCCESS);

        default:
              cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }

}


