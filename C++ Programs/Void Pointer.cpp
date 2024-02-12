// void pointer

#include<iostream>
using namespace std;
int main()

{
	int j=10;
	float b=05.05;
	char c='g';
	void *z;
	z=&j;
	cout<<"Adress of j"<<endl<<z<<endl;
	z=&b;
	cout<<"Adress of b"<<endl<<z<<endl;
	z=&c;
	cout<<"Adress of c"<<endl<<z<<endl;
	return 0;
}
