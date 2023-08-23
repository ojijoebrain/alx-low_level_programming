#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0
 */

int main(void)
{
	int pw[50];
	int sum = 0;
	int n;
	int i;

	srand(time(NULL));

	for (i = 0; i < 50; i++)
	{
		pw[i] = rand() % 78;
		sum += pw[i];
		printf("%d", pw[i]);

		if ((1500 - sum) < 78)
		{
			n = 1500 - sum;
			sum += n;
			printf("%d", n);
			break;
		}
	}
	printf("Tada! congrats");
	return (0);
}
