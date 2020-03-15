#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        unsigned int i, repeat;
        int num, min;

        repeat = 0;

        scanf("%d", &repeat);

        if (repeat > 0)
                scanf("%d", &min);
        else
                EXIT_FAILURE;


        for (i = 1; i < repeat; ++i) {
                scanf("%d", &num);
                if (num < min)
                        min = num;
        }

        printf("Min is %d\n", min);

        return EXIT_SUCCESS;
}
