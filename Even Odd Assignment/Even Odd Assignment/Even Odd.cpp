#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	int num;
	//Interface :p
	cout << "			< < < < < Even/Odd Detecter > > > > > "<<endl<<endl<<"Enter Value= ";
	//Input...
	cin >> num;
	cout << endl << endl;
	//Output (If a number is multiple of "2", then It's an Even Number otherwise It's an Odd Number)
	if (num%2<=0)
	{
		cout << "It's an Even Number!";

	}
	else
	{
		cout << "It's an Odd Number!";
	}

	_getch();
}