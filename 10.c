#include <stdio.h>
#include <wchar.h>
#include <locale.h>

int main(void) {
    setlocale(LC_ALL, "");

    wchar_t word1[50], word2[50], word3[50];

    wscanf(L"%49ls %49ls %49ls", word1, word2, word3);

    wprintf(L"%-15ls|%20ls|%.5ls\n", word1, word2, word3);

    return 0;
}
