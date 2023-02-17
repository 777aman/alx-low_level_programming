#include <stdlib.h>
#include <time.h>
#include <stdlib.h> 

/* more headers goes there */

/* betty style doc for function main goes there */
/**
 *  main - Entry point
 *  Description - prints if random generated number is +tive, zero or -tive 
 *  Return: Always 0 (success)
 */

int main(void)

{                        
	int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
     		/* your code goes there */
                if (n < 0)
			printf("%d negative\n", n)
		else if ( n == 0)
			prinf("%d is zero\n", n)
		else
			printf("%d is positive\n", n
					return (0);

}
