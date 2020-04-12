#include <iostream>
#include <stdlib.h>

void ground_f();
void first_f();
void second_f();
void third_f();
void fourth_f();
void fifth_f();

using namespace std;

int main(){
	int a;
	
	cout<<"The Current Position Of The Elevator Is = Ground Floor"<<endl;
	cout<<"Enter Any One Option From Given Below :"<<endl;
	sub:
		/*cout<<"\n 0--Ground Floor \n";
		cout<<"\n 1--1st Floor \n";
		cout<<"\n 2--2nd Floor \n";
		cout<<"\n 3--3rd Floor \n";
		cout<<"\n 4--4th Floor \n";
		cout<<"\n 5--5th Floor \n";*/
		
		cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
		cout<<"Chose Option : ";
		cin>>a;
		
		switch(a)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
            //cout<<"You Have Entered Wrong Option.Try Again!\n"<<endl;
            goto sub;
            break;
    }
}

////////////----------------Ground Floor-------------------------///////////////

void ground_f()
{
    cout<<"Ground Floor : ";
    cout<<"Lift Door Open : ";
    cout<<"Current Position Is Ground Floor : "<<endl;

    sub:
    int inmenu;
    cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
              //cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

////////////----------------1st Floor-------------------------///////////////

void first_f()
{
    cout<<"1st Floor : ";
    cout<<"Lift Door Open : ";
    cout<<"Current Position Is 1st : "<<endl;

    sub:
    int inmenu;
    cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
              //cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

////////////----------------2nd Floor-------------------------///////////////

void second_f()
{
    cout<<"2nd Floor : ";
    cout<<"Lift Door Open : ";
    cout<<"Current Position Is 2nd Floor : "<<endl;

    sub:
    int inmenu;
    cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
              //cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

////////////----------------3rd Floor-------------------------///////////////

void third_f()
{
    cout<<"3rd Floor : ";
    cout<<"Lift Door Open : ";
    cout<<"Current Position Is 3rd Floor : "<<endl;

    sub:
    int inmenu;
    cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
              //cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

////////////----------------4th Floor-------------------------///////////////

void fourth_f()
{
    cout<<"4th Floor : ";
    cout<<"Lift Door Open : ";
    cout<<"Current Position Is 4th Floor : "<<endl;

    sub:
    int inmenu;
    cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
              //cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}

////////////----------------5th Floor-------------------------///////////////

void fifth_f()
{
    cout<<"5th Floor : ";
    cout<<"Lift Door Open : ";
    cout<<"Current Position Is 5th Floor : "<<endl;

    sub:
    int inmenu;
    cout<<"0	"<<"1	"<<"2	"<<endl;
		cout<<"3    "<<"	4	"<<"5\n";
		cout<<"\n     6--Close \n";
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 0:
                ground_f();
                break;

        case 1:
                first_f();
                break;
                
        case 2:
                second_f();
                break;
                
        case 3:
                third_f();
                break;
                
        case 4:
                fourth_f();
                break;
                
        case 5:
                fifth_f();
                break;
                
        case 6:
                exit(EXIT_SUCCESS);
                break;

        default:
              //cout<<"\n\nYou have Entered Wrong Input!Please Choose Again!"<<endl;
              goto sub;
    }
}
