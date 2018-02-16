// DateList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

//global variable declaration
int m1;
int d1;
int year1;
int m2;
int d2;
int year2;
int number_of_days;
int month_days = 30; //assume that average 30 days per month.

int main()
{
	cout << "Enter first date: ";
	cin >> year1 >> m1 >> d1; //read in user input
	cout << "Enter second date: ";
	cin >> year2 >> m2 >> d2; //read in user input
	
	if (year1 >= 1901 && year2 <= 2099)
		{
			if (year1 == year2) //same year
			{
				if (m1 == m2) //same month
					number_of_days = d2 - d1;
				else
				{
					for (int i = m1; i < m2 - 1; i++)
						number_of_days += month_days;
					number_of_days += month_days - d1 + d2;
				}
			}
			else 
			{
				for (int i = 0; i < m2; i++)
					number_of_days += month_days;
				for (int i = m1; i < 12; i++)
					number_of_days += month_days;
				if (year2 - year1 >= 0)
					number_of_days += (year2 - year1) * 365 +
					month_days - d1 + d2;
			}

			cout << "Days between the two dates: " << number_of_days;
		}
	else
	{
		cout << "Year must enter year between the years 1901 and 2099";
		
	}
	
	return(0);
}