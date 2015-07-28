#include <stdio.h>

long
isaprime(long number)
{
	int i = 2; /* don't need to test n/1 */

	if (number == 1)
		return 1;

	while ((number % i) != 0) {
		i++;
	}

	if (i < number)
		return 0;
	else
		return 1;
}

long
biggerprime(long number) /* get the the closest next prime to number */
{
	if (isaprime(number)) {
		while(isaprime(number))
			number++;
	}
	while (!isaprime(number++))

	return number;
}

int
main(void)
{
	long divisor = 2; /* start as 2 */
	long result = 600851475143; /* result of division starts as the main number */

	while (result > 1) {
		if (result % divisor == 0) {
			result = result / divisor;
		} else {
			divisor = biggerprime(divisor);
		}
	}

	printf("%i\n", divisor);
	return 0;	
}
