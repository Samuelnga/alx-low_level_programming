#include <stdio.h>

int main(void)
{
    // Printing numbers from 0 to 9
    putchar('0');
    for (int i = 1; i < 10; i++) {
        putchar(',');
        putchar(' ');
        putchar(i + '0');
    }

    putchar('\n');

    return 0;
}
