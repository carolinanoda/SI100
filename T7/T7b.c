/*Programa que verifica se uma palavra é palindromo ou nao */
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char palavra[81], palavra1[81];
    int i, x, y;

    fgets(palavra, 81, stdin);
    x = strlen(palavra) - 2;
    for (i = x; i >= 0; i--) {
        palavra1[i] = palavra[x - i];
    }
    size_t ln = strlen(palavra) - 1;
    if (palavra[ln] == '\n') 
        palavra[ln] = '\0';
    for (i=0; i < strlen(palavra); i++) {
        palavra[i] = tolower(palavra[i]);
        palavra1[i] = tolower(palavra1[i]);
    }
    y = strcmp(palavra, palavra1);
    if (y == 0) {
        printf("Esta palavra e um palindromo\n");
    }
    else {
        printf("Esta palavra nao e um palindromo\n");
    }
    

    return 0;
}