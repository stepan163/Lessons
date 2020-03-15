#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        unsigned int i, repeat;
        int num, total;

        repeat = total = 0;

        scanf("%d", &repeat);

        for (i = 0; i < repeat; ++i) {
                scanf("%d", &num);
                total = total + num;
        }

        printf("Total is %d\n", total);

        return EXIT_SUCCESS;
}
