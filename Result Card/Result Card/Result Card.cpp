// Header Files...
#include <iostream>
#include <conio.h>
using namespace std;
// Main Function...
void main()
{	cout << "\t\t\t\t< < < < < RESULT CARD > > > > >\n\n";
	float m, p, c, e, per, t;									// Declaration...
	cout << "\tCOMPUTER \t ";		cin >> m;
	cout << "\tBOTANY \t\t ";		cin >> p;
	cout << "\tZOOLOGY \t ";		cin >> c;
	cout << "\tMICROBIOLOGY \t ";	cin >> e;
	cout << "================================================================================================";
	t = m + p + c + e;											// Total...
	cout << "\n\tAVERAGE \t " << (m + p + c + e) / 4;			// Average...
	cout << "\n\tTOTAL \t\t " << t << "/400\n";
	per = ((t) / 400) * 100;									// Percentage...
	cout << "\tPERCENTAGE \t " <<per  << " %\n";
	if (per <= 32) {cout << "\tSTATUS\t\t FAIL";}				// Conditions...
	if (per >= 33) {cout << "\tSTATUS\t\t PASS";}
	if (per >= 80 && per <= 100){cout<< "\t\n\tGRADE \t\t A+";}
	if (per >= 70 && per <= 79){cout << "\t\n\tGRADE \t\t A ";}
	if (per >= 60 && per <= 69){cout << "\t\n\tGRADE \t\t B+";}
	if (per >= 50 && per <= 59){cout << "\t\n\tGRADE \t\t B ";}
	if (per >= 40 && per <= 49){cout << "\t\n\tGRADE \t\t C ";}
	if (per >= 30 && per <= 32){cout << "\t\n\tGRADE \t\t F ";}
	cout << "\n\t\t\t\t\t\t\t\tCoded By: Usama Sarwar";
	cout << "\n\t\t\t\t\t\t\t\t\t  FA17-BCS-090";
	_getch();}