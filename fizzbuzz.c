#include <stdio.h>

void fizzbuzz()
{
	int counter;

	counter = 0;
	while(counter < 100)
	{
		counter++;
		if ((counter % 3 == 0) && (counter % 5 == 0))
		{
			printf("FizzBuzz\n");
		}
		else if(counter % 3 == 0)
		{
			printf("Fizz\n");
		}
		else if(counter % 5 == 0)
		{
			printf("Buzz\n");
		}
		else
		{
			printf("%d\n", counter);
		}
	}
}

int main()
{
 	fizzbuzz();
	return(0);
}
