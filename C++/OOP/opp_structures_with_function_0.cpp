#include <iostream>
using namespace std;

struct student
{
    char name[50];
	char fee_st;
	float gpa;
	int roll_no;
};

void displayData(student);   // Function declaration

int main()
{
    student s;

    cout << "Enter Full name: ";
    cin.get(s.name, 50);
    cout << "Enter Fee Status: ";
    cin >> s.fee_st;
    cout << "Enter GPA: ";
    cin >> s.gpa;
    cout << "Enter Roll No: ";
    cin >> s.roll_no;

    // Function call with structure variable as an argument
    displayData(s);

    return 0;
}

void displayData(student s)
{
    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << s.name << endl;
    cout <<"Fee Status: " << s.fee_st << endl;
    cout << "GPA: " << s.gpa<<endl;
    cout << "Roll No: " << s.roll_no;
}
