#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        int box = 1;

        for (int apple = 1; apple <= 15; apple += 2) {
                 box = box * apple;
        }

        printf("Apples: %d\n", box);

        return EXIT_SUCCESS;
}
