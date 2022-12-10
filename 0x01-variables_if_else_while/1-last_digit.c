#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int lastNum;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastNum = n % 10;

	if (lastNum == 0)
	{
		printf("Last digit of %i is %d and is 0", n, lastNum);
	}
	else
	{
		if ( lastNum > 5 )
		{
			printf("Last digit of %i is %d and is greater than 5", n, lastNum);
		}
		else
		{
			printf("Last digit of %i is %d and is less than 6 and not 0", n, lastNum);

		}
	}

	return (0);
}
