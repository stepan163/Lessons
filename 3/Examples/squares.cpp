#include <std_lib.h>

int square(int num)
{
    int res {0};
    for (int i {0}; i < num; ++i)
        res += num;
    return res;
}

void do_for(int times)
{
    for (int i {0}; i < times; ++i)
        cout << i << '\t' << square(i) << '\n';
}

void do_while(int times)
{
    int i {0};
    while (i < times) {
        cout << i << '\t' << square(i) << '\n';
        ++i;
    }
}

int main ()
{
//    do_while(150);
    do_for(50);
    return 0;
}
