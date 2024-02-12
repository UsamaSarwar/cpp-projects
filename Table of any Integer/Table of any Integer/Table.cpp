// For Loop!
/*#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int num;
	cout << "Enter Number: ";
	cin >> num;

	for (int t = 1; t <= 10; t++)
	{
		cout << num << "*" << t << "=" << t*num << endl;
	}
	_getch();
}*/

// While Loop!
/*#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int num;
	cout << "Enter Number: ";
	cin >> num;
	int t = 1;
	while ( t<=10)
	{
		cout << num << "*" << t << "=" << t*num << endl;
		t++;
	}
	_getch();
}*/

// Do- While Loop
#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int num;
	cout << "Enter Number: ";
	cin >> num;
	int t = 1;
	do
	{
		cout << num << "*" << t << "=" << t*num << endl;
		t++;
	} 
	while (t <= 10);
	_getch();
}