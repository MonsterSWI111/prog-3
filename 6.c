#include <stdio.h>

int main(void) {
    char word[50];
    int width;

    scanf("%49s %d", word, &width);

    printf("%*s\n", width, word);
    printf("%-*s\n", width + 5, word);

    return 0;
}
