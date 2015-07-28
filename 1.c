#include <stdio.h>

int
main(void)
{
	int total;
	int i;

	while(i < 1000) {
		if(i % 3 == 0 || i % 5 == 0)
			total += i;
		i++;
	}

	printf("%d\n", total);
	return 0;
}
