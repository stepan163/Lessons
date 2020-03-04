#include <stdio.h>

int main(void)
{
        int num, st, encrypted;
        int thousands, hundreds, tens, ones;

        encrypted = 0;
        thousands = hundreds = tens = ones = 0;

        printf("Enter secret number:\n");

        if ((st = scanf("%d", &num)) == EOF)
                return 0;

        if (st != 1) {
                fprintf(stderr, "ERROR: invalid number\n");
                return 1;
        }

        if (num / 1000 < 1 || num / 1000 > 10) {
                fprintf(stderr, "ERROR: number must be four-digit long\n");
                return 1;
        }

        thousands = num / 1000;
        num -= thousands * 1000;

        hundreds = num / 100;
        num -= hundreds * 100;

        tens = num / 10;
        num -= tens * 10;
        ones = num;

        thousands = thousands + 10 - 7;
        hundreds =  hundreds + 10 - 7;
        tens = tens + 10 - 7;
        ones = ones + 10 - 7;

        encrypted = thousands * 1000 + hundreds * 100 + tens * 10 + ones;
        printf("Decrypted: %d\n", encrypted);

        return 0;
}
