#include<iostream>
#include<conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

main()
{
	unsigned int LM=50, RM=50;
	cout<<"LEFT MOTOR "<<LM<<endl;
	cout<<"RIGHT MOTOR "<<RM<<endl;
	
	while(true)
	{
		int c = 0;
		c = getch();
	
	switch(c)
	{
		case KEY_UP:
				cout<<"UP\n";
				LM = LM + 5;
				RM = RM + 5;
				cout<<"LEFT MOTOR "<<LM<<" RIGHT MOTOR "<<RM<<endl;
				break;
				
			case KEY_DOWN:
				cout<<"DOWN\n";
				LM = LM - 5;
				RM = RM - 5;
				cout<<"LEFT MOTOR "<<LM<<" RIGHT MOTOR "<<RM<<endl;
				break;
				
			case KEY_LEFT:
				cout<<"LEFT\n";
				LM = LM - 5;
				RM = RM + 5;
				
				if(LM==0){
					break;
				}
				cout<<"LEFT MOTOR "<<LM<<" RIGHT MOTOR "<<RM<<endl;
				break;
				
			case KEY_RIGHT:
				cout<<"RIGHT\n";
				LM = LM + 5;
				RM = RM - 5;
				
				if(RM==0){
					//LM=0;
					break;
				}
				cout<<"LEFT MOTOR "<<LM<<" RIGHT MOTOR "<<RM<<endl;
				break;
	}   
	}
}
