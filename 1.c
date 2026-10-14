#include <stdio.h>
#include <string.h>

int main(void) {
    char word[20] = "SibSUTIS";

    printf("SIZEOF: %zu\n", sizeof(word));
    printf("STRLEN: %zu\n", strlen(word));
    printf("FREE_BYTES: %zu\n", sizeof(word) - strlen(word) - 1);

    char russian[20] = "СибГУТИ";

    printf("\nSIZEOF: %zu\n", sizeof(russian));
    printf("STRLEN: %zu\n", strlen(russian));
    printf("FREE_BYTES: %zu\n", sizeof(russian) - strlen(russian) - 1);

    return 0;
}
