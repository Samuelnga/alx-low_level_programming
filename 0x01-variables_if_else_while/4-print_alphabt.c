#include <stdio.h>

int main(void)
{
    char lowercase = 'a';

    while (lowercase <= 'z') {
        if (lowercase != 'q' && lowercase != 'e') {
            putchar(lowercase);
        }
        lowercase++;
    }

    putchar('\n');

    return 0;
}
