#include <stdio.h>

int main()
{	
	int num;	
	
	printf("Enter number (1..10): ");
	scanf("%i", &num);
	
	if (num < 1 || num > 10)
	{
		printf("ERROR: Nuber out of range!\n");	
		return 1;	
	}

	// 5
	// *****
	// *   *
	// *   *
	// *   *
	// *****

	if ( num == 1)
	{
		printf("*\n");
		return 0;
	}

	for (int i = 0; i < num; ++i)
	{
		printf("*");
	}
	puts("");	

	for (int i = 0; i < num - 2; ++i)
	{
		printf("*");
		for (int j = 0; j < num - 2; ++j) 
		{
			printf(" ");
		}
		printf("*");
		puts("");
	}

	for (int i = 0; i < num; ++i)
	{
		printf("*");
	}
	puts("");	
	
	return 0;
}	
