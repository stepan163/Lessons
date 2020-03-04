#include <stdio.h>

int main(void)
{
        int num, st, count, target;

        count = 0;

        printf("Enter number and digit: ");
        if ((st = scanf("%d %d", &num, &target)) == EOF)
                return 0;

        if (st != 2) {
                fprintf(stderr, "ERROR: invalid number\n");
                return 1;
        }

        while (num != 0) {
                if (num % 10 == target)
                        ++count;
                num /= 10;
        }

        printf("Digit %d appears %d ", target, count);

        if (count == 1)
                printf("time ");
        else
                printf("times ");

        printf("in %d\n", num);

        return 0;
}
