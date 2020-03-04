#include <math.h>
#include <stdio.h>
#include <float.h>

#define BASE 2

int main(void)
{
         double num, exp;

        num = 2;
        for (exp = 1; num < DBL_MAX; ++exp) {
                num = pow(BASE, exp);
                printf("%0f\n", num);
        }

        return 0;
}
