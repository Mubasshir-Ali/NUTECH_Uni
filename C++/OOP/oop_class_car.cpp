#include<iostream>

using namespace std;
 
 class car{
 	public:
 		string brand;
 		string model;
 		int year;
 };
 
 int main()
 {
 	car carobj1;	//creat object car
 	
 	carobj1.brand = "ABC";
 	carobj1.model = "A1";
 	carobj1.year = 2020;
 	
 	car carobj2;	//creat object car
 	
 	carobj2.brand = "XYZ";
 	carobj2.model = "B1";
 	carobj2.year = 2019;
 	
 	//print attribute values
 	cout<<carobj1.brand<<" "<<carobj1.model<<" "<<carobj1.year<<endl;
 	cout<<carobj2.brand<<" "<<carobj2.model<<" "<<carobj2.year<<endl;
 	
 	
 }
