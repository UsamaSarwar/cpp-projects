#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int avg;
	cout << "Enter your score= ";
	//User Input
	cin >> avg;
	cout << endl << endl;
	//Condition
	if (avg >= 33)
	{
		cout << "Congratulations!" << endl << "You're pass :)";
	}
	else
	{
		cout << "Sorry" << endl << "Try Again...";
	}
	//For Visual Studio 2013
	_getch();
	//For Visual Studio 2010 or below use
	//getch();
}