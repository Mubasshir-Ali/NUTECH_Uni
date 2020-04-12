#include <iostream>
using namespace std;
void DecimalToBinary(int n) {
   int binaryNumber[100], num=n;
   int i = 0;
   while (n > 0) {
      binaryNumber[i] = n % 2;
      n = n / 2;
      i++;
   }
   cout<<"Binary form of "<<num<<" is ";
   for (int j = i - 1; j >= 0; j--)
      cout << binaryNumber[j];
   cout<<endl;
}
int BinaryToDecimal(int n) {
   int decimalNumber = 0;
   int base = 1;
   int temp = n;
   while (temp) {
      int lastDigit = temp % 10;
      temp = temp/10;
      decimalNumber += lastDigit*base;
      base = base*2;
   }
   cout<<"Decimal form of "<<n<<" is "<<decimalNumber<<endl;;
}
int main() {
   DecimalToBinary(23);
   BinaryToDecimal(10101);
   
   int a;
	
	cout<<"Chose Any One Option From Given Below :";
	sub:
		
		do
		{
		cout<<"\n 1--Binary To Decimal \n";
		cout<<"\n 2--Decimal To Binary \n";
		cout<<"\n 0--Close \n";
		cin>>a;
		
		if(a==0)
		{
			break;
		}
		
		if(a==1)
		{
			continue;
		}
		
		else if(a==2)
		{
			continue;
		}
		
	}
	
	while(a!=0);
   return 0;
}
