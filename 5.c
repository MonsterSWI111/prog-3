#include <stdio.h>

int main(void) {
    char ch;
    scanf(" %c", &ch);

    printf("CODE_DEC: %d\n", ch);
    printf("CODE_HEX: %x\n", (unsigned int)ch);
    printf("CODE_OCT: %o\n", (unsigned int)ch);

    char upper = ch - 32;
    char next = ch + 1;
    char prev = ch - 1;

    printf("UPPER: %c\n", upper);
    printf("NEXT: %c\n", next);
    printf("PREV: %c\n", prev);

    return 0;
}
