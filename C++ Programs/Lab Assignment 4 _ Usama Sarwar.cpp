#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
	struct cal 
	{
		int date;
		int day;
		long year;
	};
	struct ply
	{
		double dis;
		float min;
		long seconds;
	};
	struct maxi
	{
		double num[9];		
	};
		struct result
	{
		int marks;
		char grade;
	};
	struct record
	{
		string Reg;
		string rt;
	};
int main ()
{
	cal C;
	cout<<"Code 1:\nEnter Date in the following format:\n";
	cout<<"Month/Day/Year=> ";		cin>>C.date>>C.day>>C.year;
	cout<<"\nYou entered: \a"<<C.date<<"/"<<C.day<<"/"<<C.year;
	ply P1,P2;
	cout<<"\n\n\nCode2:\nEnter Players' Details\n";
	cout<<"Player 1:\n";
	cout<<"Distance Covered (km): ";			cin>>P1.dis;
	cout<<"Time Taken (mm/ss): ";		cin>>P1.min>>P1.seconds;
	cout<<"Player 2:\n";
	cout<<"Distance Covered (km): ";			cin>>P2.dis;
	cout<<"Time Taken (mm/ss): ";		cin>>P2.min>>P2.seconds;
	float P1t=0.0,P2t=0.0;
	P1t=(P1.dis/((P1.min*60)+P1.seconds));
	P2t=(P2.dis/((P2.min*60)+P2.seconds));
	cout<<"\n\a";
	if (P1t>P2t)
	{
		cout<<"Player 1 is Winner!";
	}
	else
	{
		cout<<"Player 2 is Winner!";
	}
	
	cout<<"\n\n\nCode 3: ";
	maxi m1;
	cout<<"\nEnter 10 Values: \n";
	for (int i=0;i<10;i++)
	cin>>m1.num[i];
	cout<<"You Entered: \n";
	for (int j=0;j<10;j++)
	{
	if(m1.num[0]<m1.num[j])
	m1.num[0]=m1.num[j];
	}
	cout<<"\nGreatest Number is: ";
	cout<<m1.num[0]<<" \a";
	
	cout<<"\n\n\nCode 4: \n";
	result r1;
	record r2;
	cout<<"Marks: ";	cin>>r1.marks;
	cout<<"Grade: ";	cin>>r1.grade;
	cout<<"Registration Number: ";	cin>>r2.Reg;
	cout<<"Result Type: ";			cin>>r2.rt;
	cout<<"\nSaved Details:\n";
	cout<<"Marks: "<<r1.marks;
	cout<<"\nGrade: "<<r1.grade;
	cout<<"\nRegistration Number: "<<r2.Reg;
	cout<<"\nResult Type: "<<r2.rt;


	getch ();
}
