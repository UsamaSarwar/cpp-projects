// add two pointers

#include<iostream>
using namespace std;
int main()
{
	int a,b,*x,*y,result;
	cout<<"\nEnter any two digits for adding\n"<<endl;
	x=&a;
	cout<<"Enter first digits=\n"<<endl;
	cin>>a;
	y=&b;
	cout<<"\nEnter second digits="<<endl;
	cin>>b;
	result=*x+*y;
	cout<<"\nThe sum is="<<result<<endl;
 return 0;
}

