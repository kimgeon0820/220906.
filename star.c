#include <stdio.h>

int main(void)
{
	int input = 0;
	int i = 0, j = 0, k = 0, l = 0;

	scanf_s("%d", &input);

	for (i=input ; i > 0; i--)
	{
		for (j=i; j > 0; j--)
		{
			printf("*");
		}
		for (k = 2 * input - 2 * i; k > 0; k--)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
		
	}

	for (i = 1; i <= input; i++)
	{
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		for (k = 2 * input - 2 * i; k > 0; k--)
		{
			printf(" ");
		}
		for (j = i; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");

	}

	return 0;
}