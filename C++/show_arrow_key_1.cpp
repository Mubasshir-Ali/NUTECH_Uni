#include<iostream>
#include<conio.h>

using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

main()
{
	while(true)
	{
		int c = 0;
		c = getch();
	
	switch(c)
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
				
		
	}   
	}
}
