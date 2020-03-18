#include <stdio.h>
#include <stdlib.h>

int main(void)
{
        for (int i = 1; i <= 10; ++i) {
                for (int j = 1; j <= 10; ++j)
                        printf("%i X %2i = %3i\n", i, j, i * j);
                puts("");
        }

        return EXIT_SUCCESS;
}
