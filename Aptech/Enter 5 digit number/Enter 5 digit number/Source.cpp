#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int x;
	cout << "Enter 5 digit number:";
	cin >> x;
	cout << x / 10000 << endl;
	cout << (x % 10000) / 1000 << endl;
	cout << ((x % 1000)%1000)/100 << endl;
	cout << (((x % 1000) % 1000) % 100)/10 << endl;
	cout << (((x % 1000) % 1000) % 100)%10 << endl;
	_getch();
}