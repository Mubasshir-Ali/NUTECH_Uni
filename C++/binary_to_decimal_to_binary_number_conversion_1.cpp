#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;

void BinaryToDecimal();
void DecimalToBinary();

//void method();

int main(){
	int a;
	
	cout<<"Enter Any One Option From Given Below :";
	sub:
		cout<<"\n 1--Binary To Decimal \n";
		cout<<"\n 2--Decimal To Binary \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		
		switch(a)
    {
        case 1:
                BinaryToDecimal();
                break;

        case 2:
                DecimalToBinary();
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

void BinaryToDecimal()
{
	long long num;
    int decimalNum, i, rem;

    cout << "Enter Binary Number: ";
    cin >> num;

    decimalNum = 0;
    i = 0;

    //converting binary to decimal
    while (num != 0)
    {
      rem = num % 10;
      num /= 10;
      decimalNum += rem * pow(2, i);
      ++i;
    }

    cout << "Equivalent Decimal number: " << decimalNum << endl;

   //return 0;


    sub:
    int inmenu;
    cout<<"\n\n\n1. Enter Again"<<endl;
    cout<<"2. Go Back to Main Menu"<<endl;
    cout<<"3. Exit This App \n\n"<<endl;
    cout<<"Chose Option: "<<endl;
    cin>>inmenu;

    switch(inmenu)
    {
        case 1:
                BinaryToDecimal();
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

void DecimalToBinary()
{
    int num, binaryNum = 0;
   int i = 1, rem;

   cout << "Enter any decimal number: ";
   cin >> num;

   //while loop to convert decimal to binary
   while (num != 0)
   {
      rem = num % 2;
      num /= 2;
      binaryNum += rem * i;
      i *= 10;
   }

   cout << "Equivalent Binary Number: " << binaryNum << endl;

   //return 0;


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
                DecimalToBinary();
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


