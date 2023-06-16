#include <stdio.h>

int main() {
    int i;
    
    // Print the lowercase alphabet using putchar
    for (i = 0; i < 26; i++) {
        putchar('a' + i);
    }
    
    // Print a new line
    putchar('\n');
    
    return 0;
}
