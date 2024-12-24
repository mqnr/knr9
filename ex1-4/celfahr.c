#include <u.h>
#include <libc.h>

/* print Celsius-Fahrenheit table
    for celsius = 0, 20, ..., 300 */
void
main()
{
	float celsius, fahr;
	int lower, upper, step;

	lower = 0;   /* lower limit of temperature table */
	upper = 300; /* upper limit */
	step = 20;   /* step size */

	celsius = lower;
	print("%3s %6s\n", "cel", "fahr");
	while (celsius <= upper) {
		fahr = (9.0/5.0) * celsius + 32;
		print("%3.0f %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}
}
