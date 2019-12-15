// 3 foo 5 bar 3 and 5 foobarv else 0
#include <stdio.h>

int main(void)
{
	int n;  // |00000000|00000000|00000000|00011000
	printf("n: ");
	scanf("%d", &n);
	
	do
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			puts("foobar");
		}
		else if (n % 3 == 0)
		{
			puts("foo");
		}
		else if (n % 5 == 0)
		{
			puts("bar");
		}
		else
		{
			puts("lol");
		}

	} while (n != -1);

	return 0;
}

