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
const int month_days = 30; //assume that average 30 days per month.
char c = '-';
int main()
{
	cout << "YYYY-MM-DD" << endl;
	cin >> year1 >> c >>  m1 >> c >> d1; //read in user input  
	cin >> year2 >> c >> m2 >>  c >> d2; //read in user input
	cout << "---------------------------------" << endl; ///for visability
	if (year1 >= 1901 && year2 <= 2099 && year1 != 0 && year2 != 0)
	{
		if (year1 == year2) //same year
		{
			if (m1 == m2)//same month
				if (m1 >= 13 || m2 >= 13 || m1 == 0 || m2 == 0 || d1 > 30 || d2 > 30 || d1 == 0 || d2 == 0)
				{
					cout << "ERROR: Month must be less than or equal to 12, or bigger than 0." << endl;
					cout << "OR: ERROR: Date must be less than or equal to 30, or bigger than 0." << endl;
				}
				else if (d1 != d2) //make sure all inputs are valid
				{
					for (int i = d2 - 1; i > d1 - 1; i--)
					{
						cout << year1 << c << m1 << c << i << endl;
					}
				}
				else
				{
					cout << "There is no date in between.";
				}

			//not same month
			else
			{
				if (m1 >= 13 || m2 >= 13 || m1 == 0 || m2 == 0 || d1 > 30 || d2 > 30 || d1 == 0 || d2 == 0)
				{
					cout << "ERROR: Month must be less than or equal to 12, or bigger than 0." << endl;
					cout << "OR: ERROR: Date must be less than or equal to 30, or bigger than 0." << endl;

				}
				else 
				{
					//print all dates of first month

					int i = 1;
					if (i = 1)
						for (int j = d2 - 1; j > 0; j--)
						{
							cout << year1 << c << m2 << c << j << endl;
						}
					i = 2;

					//list the rest of dates
					for (int i = m2 - 1; i > m1; i--)
					{
						for (int j = month_days; j > 0; j--)
						{
							cout << year1 << c << i << c << j << endl;
						}

					}
					//print all dates of first month
					int j = 1;
					if (j = 1)
					{
						for (int j = month_days; j >= d1; j--)
						{
							cout << year1 << c << m1 << c << j << endl;
						}
						j = 2;
					}
				}
			}//closeing else statement for different month
		}//close same year if statement
		//different year////////////////////////////////////////////////
		else
		{
			if (year1 > year2)
			{
				cout << "First year must be older than second year" << endl;
			}
			else
			{
				if (m1 > 13 || m2 > 13 || m1 == 0 || m2 == 0 || d1 > 30 || d2 > 30 || d1 == 0 || d2 == 0)
				{
					cout << "ERROR: Month must be less than or equal to 12, or bigger than 0." << endl;
					cout << "OR: ERROR: Date must be less than or equal to 30, or bigger than 0." << endl;

				}

				else
				{
					//list all dates in first year and fist month
					for (int j = d2 - 1; j > 0; j--)
					{
						cout << year2 << c << m2 << c << j << endl;
					}


					//list the rest of dates except last month of 1st year
					for (int a = year2 - 1; a > year1 - 1; a--)
					{
						for (int i = 12; i > 1; i--)
						{
							for (int j = month_days; j > 0; j--)
							{
								cout << a << c << i << c << j << endl;
							}
						}
					}
					//list last month of 1st year
					for (int j = month_days; j >= d1; j--)
					{
						cout << year1 << c << m1 << c << j << endl;
					}
				}
			}
			
			
		}//closing else statement for different year
	} //closing year1 >= 1901 && year2 <= 2099 if statement
	else
	{
		cout << "ERROR: Year must enter year between the years 1901 and 2099 or 0.";
		
	}
	
	return(0);
}
