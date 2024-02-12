#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
	cout << "					< < < AutoCalculator > > >" << endl << endl;
	cout << "Type 1st value and press Enter to Type 2nd value and then press Enter for Results:" << endl << endl;
	float mod;
	int a, s, m;
	float v1, v2, d;
	cout << "1st Value= ";
	cin >> v1;
	cout << "2nd Value= ";
	cin >> v2;
	a = v1 + v2;
	s = v1 - v2;
	m = v1*v2;
	d = v1 / v2;
	mod = v1%v2;
	cout << endl << "Results:" << endl << endl;
	cout << "Sum= " << a << endl;
	cout << "Difference= " << s << endl;
	cout << "Multiplication= " << m << endl;
	cout << "Division= " << d << endl;
	cout << "Modulus= " << mod << endl;
	_getch();
}