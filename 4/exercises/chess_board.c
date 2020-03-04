/*
 *   Draw a chess board:
 *
 *   * * * * * * * *
 *    * * * * * * * *
 * int i;
 *
 * for (i = 0; i < 10; ++i)
 *      command;
 *
 * i = 0;
 * while (i < 10) {
 *       command;
 *       +=i;
 * }
 */

#include <stdio.h>

int main(void)
{
        int i, j;

        for (i = 0; i < 8; ++i) {
                if (i % 2 != 0)
                        printf(" ");
                for (j = 0; j < 8; ++j)
                        printf("* ");
                printf("\n");
        }

        return 0;
}
