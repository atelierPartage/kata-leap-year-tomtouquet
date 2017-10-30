#include <criterion/criterion.h>

int is_leap_year(int year);

Test(simple, 2016)
{
	cr_assert(is_leap_year(2016));
}
