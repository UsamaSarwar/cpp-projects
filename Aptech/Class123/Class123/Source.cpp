#include <iostream>
#include <string>
#include <conio.h>
using namespace std;
void  main()
{
	string name;
	int age;
	char gndr;
	name = "nam";
	age = 20;
	gndr = 'M';
	cout <<"Your Initialized values are: "<<endl;
	cout << name << endl << age << endl;
	cout << gndr << endl;
	cout << "Enter your name: ";
	cin >> name;
	cout << "Enter your Age: ";
	cin >> age;
	cout << "Enter your gender (M/F): ";
	cin >> gndr;
	cout << "Your runtime values are:" << endl;
	cout << name << endl << age <<endl<< gndr;
	system("pause");
	//We can also use...
	//_getch (); 
}