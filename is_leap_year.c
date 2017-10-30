/*
** EPITECH PROJECT, 2017
** 
** File description:
** 
*/

int is_leap_year(int year)
{
	if (year % 4 != 0 || year % 400 != 0) {
		return (0);
	}
	if ( year % 4 == 0 && year % 100 != 0 && year % 400 == 0) {
		return (1);
	}
}
	
		
		
		
