#include <u.h>
#include <libc.h>

/* print Fahrenheit-Celsius table */
void
main()
{
	int fahr;

	for (fahr = 0; fahr <= 300; fahr = fahr + 20)
		print("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}
