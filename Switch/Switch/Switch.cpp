/*#include <iostream>
#include <conio.h>
using namespace std;
void main() 
{
	// local variable declaration:
	char grade;
	cout << "Enter your Grade: ";
	cin >> grade;
	cout << endl;
	switch (grade) 
	{
	case 'A':
		cout << "Excellent!" << endl;
		break;
	case 'B':
	case 'C':
		cout << "Well done" << endl;
		break;
	case 'D':
		cout << "You passed" << endl;
		break;
	case 'F':
		cout << "Better try again" << endl;
		break;
	default:
		cout << "Invalid grade" << endl;
	}
	cout << "Your grade is " << grade << endl;
	_getch ();
}
*/

#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	// local variable declaration:
	int marks;
	cout << "Enter your Marks: ";
	cin >> marks;
	cout << endl;
	switch (marks)
	{
	case 90:
		cout << "Excellent!" << endl;
		break;
	case 70:
	case 80:
		cout << "Well done" << endl;
		break;
	case 'D':
		cout << "You passed" << endl;
		break;
	case 'F':
		cout << "Better try again" << endl;
		break;
	default:
		cout << "Invalid grade" << endl;
	}
	cout << "Your grade is " << grade << endl;
	_getch();
}
