#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;
void main()
{
	ofstream file;
	string b = " Bye";
	file.open("A.txt");
	file >> b;
	file.close();

	_getch();
}