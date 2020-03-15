#include <stdio.h>
#include <stdlib.h>

#define END_OF_INPUT 228

int main(void)
{
        unsigned int count;
        int num, total;

        num = total = count = 0;

        scanf("%d", &num);
        while (num != END_OF_INPUT) {
                total += num;
                ++count;
                scanf("%d", &num);
        }

        if (count != 0)
                printf("Average is %d\n", total / count);

        return EXIT_SUCCESS;
}
