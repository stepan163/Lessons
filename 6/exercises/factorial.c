#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int number = 10, factorial = 1;

        /* printf("Enter number (1 - 10): "); */

        /* if (scanf("%d", &number) != 1) */
        /*         return EXIT_FAILURE; */

        /* if (number < 1 || number > 10) */
        /*         return EXIT_FAILURE; */

        // Calculate number!
        for (int i = 1; i <= number; ++i) {
                factorial = factorial * i;
                printf("Factorial of %i = %i\n", i, factorial);
        }

        return EXIT_SUCCESS;
}
