/*
File Name: Ch4Ex10_Katlyn_Winkelhake.cpp
Date: 9/27/2024
Programmer: Katlyn Winkelhake
Requirements:
Write a program that asks the user to enter the month (letting the user 
enter an integer in the range of 1 through 12) and the year.
The program should then display the number of days in that month.
Determine whether the year is divisible by 100. If it is, then it is a leap year if
and only if it is divisible by 400. For example, 2000 is a leap year but 2100 is not.
If the year is not divisible by 100, then it is a leap year if and only if it is divisible by 4.
For example, 2008 is a leap year but 2009 is not.

*/

#include <iostream>
using namespace std;

int main()
{

	int enterMonth;
	int enterYear;
	int daysInMonth;
	int leapYear;

	cout << "Please enter the month (numerical):\n";
	cin >> enterMonth;

	cout << "Please enter the year:\n";
	cin >> enterYear;

	if (enterMonth == 1) 
		daysInMonth = 31;

	if (enterMonth == 2)
		if (enterYear % 100 == 0 && enterYear % 400 == 0)
			daysInMonth = 29;

		else if (enterYear % 100 != 0 && enterYear % 4 == 0)
			daysInMonth = 29;

		else
			daysInMonth = 28;
	
	if (enterMonth == 3)
		daysInMonth = 31;

	if (enterMonth == 4)
		daysInMonth = 30;

	if (enterMonth == 5)
		daysInMonth = 31;

	if (enterMonth == 6)
		daysInMonth = 30;

	if (enterMonth == 7)
		daysInMonth = 31;

	if (enterMonth == 8)
		daysInMonth = 31;

	if (enterMonth == 9)
		daysInMonth = 30;

	if (enterMonth == 10)
		daysInMonth = 31;

	if (enterMonth == 11)
		daysInMonth = 30;

	if (enterMonth == 12)
		daysInMonth = 31;

	cout << endl;
	cout << daysInMonth << " days.\n";
	
	return 0;
}