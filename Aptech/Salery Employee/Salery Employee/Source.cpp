#include <iostream>
#include <conio.h>
using namespace std;
class student
{
	int c, a;
	char n;
public: void input()
{
	cout << "Class: ";		 cin >> c;
	cout << "Name: ";		cin >> n;
	cout << "Age: ";		cin >> a;
}
public: void output()
{
	cout << c << endl << n << endl << a;
}
};
void main()
{
	student s;
	s.input();
	s.output();
	_getch();
}