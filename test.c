#include <criterion/criterion.h>

int is_leap_year(int year);

Test(simple, 2016)
{
	cr_assert(is_leap_year(2016) == 1);
}

Test(simple, 2015)
{
        cr_assert(is_leap_year(2015) == 0);
}
Test(simple, 2030)
{
	cr_assert(is_leap_year(2030) == 0);
}
Test(simple, 2000)
{
	cr_assert(is_leap_year(2000) == 1);
}
		  

