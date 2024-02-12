#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int x;
	cout << "Enter 3 digit number:";
	cin >> x;
	cout << x / 100 << endl;
	cout << (x % 100) / 10 << endl;
	cout << x % 10 << endl;
	_getch();
}