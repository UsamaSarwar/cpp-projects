#include <iostream>
#include <conio.h>
using namespace std;
struct Student
{
	int Roll_No;
	int Marks;
};
void main()
{
	Student s1;
	cout << "Roll No: ";		cin >> s1.Roll_No;
	cout << "Marks: ";			cin >> s1.Marks;
	if (s1.Marks >= 33)
	{
		cout << "Pass! \a";
	}
	else
	{
		cout << "Fail!";
	}
	_getch();
}