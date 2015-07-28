#include <stdio.h>

int
inversed(int number)
{
	int reverse = 0, rem;

	while(number != 0) {
		rem = number % 10;
		reverse = reverse * 10 + rem;
		number /= 10;
	}

	return reverse;
}

int
palindrome(int number)
{
	if (number == inversed(number))
		return 1;
	else
		return 0;
}

int
main(void)
{
	int i, j, tmp, max_palindrome = 0;
 
	for (i = 999; i > 0; i--) {
		for (j = 999; j >= i; j--) {
			tmp = i * j;
			if (tmp > max_palindrome && palindrome(tmp)) {
				max_palindrome = tmp;
			}
		}
	}
 
	printf("%d\n", max_palindrome);
	return 0;
}
