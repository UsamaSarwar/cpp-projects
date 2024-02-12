#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void main()
{
	// Coded  by UsamaSarwar!
	string u;
	long p;
	cout << "Default Username: admin\nDefault Password: 12345\n\n\n";
	
	do
	{
		cout << "\n\nEnter Username: ";	cin >> u;
		cout << "Enter Password: ";		cin >> p;
		if (u == "admin")
		{
			if (p == 12345)
			{
				cout << "\nWelcome!\nYou're Signed in :)";
				p = 1;
			}
			else
			{
				cout << "\t\t\tInvalid Password!\n\t\t\tTry Again!";
			}
		}
		else
		{
			cout << "\t\t\tInvalid Username/Password!\n\t\t\tTry Again!";
			
		}
	} 
	while (p!=1);
	_getch();
}