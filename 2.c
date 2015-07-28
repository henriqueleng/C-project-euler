#include <stdio.h>

#define MAXFIB 4000000

int
main(void)
{
int a = 1, b = 1, c = 1, sum = 0;
 
	while (c <= MAXFIB) {
		if (c % 2 == 0)
			sum += c;
		c = a + b;
		a = b;
		b = c;
	}
 
	printf("%d\n", sum);
	return 0;	
}
