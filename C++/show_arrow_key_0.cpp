#include<iostream>
#include<conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main()
{
	int a=0;
	cout<<"Press Any Arrow Key : \n";
	
	while(1)
	{
		a = 0;
		
		switch((a=getch()))
		{
			case KEY_UP:
				cout<<"UP\n";
				break;
				
			case KEY_DOWN:
				cout<<"DOWN\n";
				break;
				
			case KEY_LEFT:
				cout<<"LEFT\n";
				break;
				
			case KEY_RIGHT:
				cout<<"RIGHT\n";
				break;
				
			default:
				//cout<<"NULL\n";
				break;
		}
	}
	
	return 0;
}
