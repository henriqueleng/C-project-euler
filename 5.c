/* this is not the fastest way of doing this, 
 * it is a very simple method that solved the problem
 */
#include <stdio.h>

int
main(void)
{
	int divisor = 1; /* start as 1 */
	int number = 1;  /* start as 1 */

	while (divisor <= 20) {
		if (number % divisor != 0) {
			number++;
			divisor = 1;
		} else {
			divisor++;
		}
	}
	printf("%i\n", number);
	return 0;
}
