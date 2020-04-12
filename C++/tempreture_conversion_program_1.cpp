#include<iostream>
using namespace std;
float fahrenheit(float);
float celsius(float);

int main()
{
        float cel, fah;
        cout<<"\n Enter Temperature in Celsius : ";
        cin>>cel;
        cout<<"\n Enter Temperature in Fahrenheit : ";
        cin>>fah;
        fah=fahrenheit(cel);
        cel=celsius(fah);
        cout<<"\n Temperature in Fahrenheit : "<<fah;
        cout<<"\n Temperature in Celsius : "<<cel;
        return 0;
}
float fahrenheit(float cel)
{
        return(1.8 * cel) + 32;
}

float celsius(float fah)
{
        return ((fah-32) / 1.8);
}
