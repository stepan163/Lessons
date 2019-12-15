// input: int from 1 to 20 else invalid print *
#include <stdio.h>

int main()
{
	int n = 1;

	printf("Enter number (1..10): ");
	scanf("%d", &n);
	
	if (n < 1 || n > 10)
	{
		printf("Error: Number %d is out of range.\n", n);
		return 1;	
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("*");
		}
		puts("");
	}

	return 0;
}	
