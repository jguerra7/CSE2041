/*
Name - Nikhil Ranjan Nayak
Regd no - 1641012040
Desc - Calculate the day's number in year
*/
#include "stdio.h"
void main()
{
	int day, year, month, days = 0;
	printf("\n Enter day - ");
	scanf("%d", &day);
	printf("\n Enter month - ");
	scanf("%d", &month);
	printf("\n Enter year - ");
	scanf("%d", &year);
	
	switch(month)
	{
		case 2: days += 30;
		case 3: days += 31;
		case 4: days += 30;
		case 5: days += 31;
		case 6: days += 30;
		case 7: days += 31;
		case 8: days += 31;
		case 9: days += 30;
		case 10: days += 31;
		case 11: days += 30;
		case 12: days += 31;
		default: break;
	}
	
	if(leap(year) == 1)
	{
		
	}
	else
	{
		
	}
}

int leap(int year)
{
	if((year % 4 == 00) || ((year % 100 == 0) && (year % 400 == 0)))
		return 1;
	return 0;
}
