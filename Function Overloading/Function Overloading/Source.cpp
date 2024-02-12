#include <iostream>
#include <conio.h>
using namespace std;
class input
{
public:void in(char a)
{
	cout<<"Character:   "<< a;
}
public:void in(float b)
{
	cout << "Float : " << b;
}
public:void in(int c)
{
	cout <<"Integer: "<< c;
}
};
void main ()
{
	input i;
	
	i.in('U');
	i.in(9.09);
	i.in(90.04);	
	_getch();
}