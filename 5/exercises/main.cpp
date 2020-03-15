#include <stdio.h>

namespace stepa {
    bool is_even(int n);
}

namespace artyom {
    bool is_even(int n);
}

using namespace stepa;

int main(void)
{
        for (int i = 0; i < 10; ++i) {
                printf("%d is %s\n", i, is_even(i) ? "even" : "odd");
        }

        return 0;
}
