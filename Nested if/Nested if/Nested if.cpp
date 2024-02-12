#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int un, pass;
	cout << "Username: ";	cin >> un;  
	cout << "Password: ";	cin >> pass;
	cout << endl;
	if (un == 123)
	{
		if (pass == 123)
		{
			cout << "Welcome   :)";
		}
		else
		{
			cout << "Wrong Password   :(";
		}
	}
	else
	{
		cout << "Wrong Username   :(";
	}
	_getch();
}