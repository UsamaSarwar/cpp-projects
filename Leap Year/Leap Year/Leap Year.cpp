#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	//Declare any Number :)
	int num;
	//Interface :p
	cout << "					< < < < < Leap Year Detecter > > > > >" << endl << endl;
	cout<< "Enter year =" ;
	//User Input ;)
	cin >> num;
	cout << endl << endl;
	//Output...
	//Function, Leap year comes after every four years :)
	if (num % 4<=0)
	{
		cout << "It's Leap Year! :)" ;
	}
	else
	{
		cout << "It's not a Leap year! :(";
	}
	_getch();
}