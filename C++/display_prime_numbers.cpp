#include <iostream> 

using namespace std; 

int main() {
   int num1 = 1, num2 = 100;
   cout << "Prime numbers between " << num1 <<" and "<< num2 <<": ";
   while (num1 < num2)
    {
        int flag = 0;

        for(int i = 2; i <= num1/2; i++)
        {
            if(num1 % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            cout << num1 << " ";

        num1++;
    }

   return 0;
}
