/*Programa q imprime a palavra inversa dada pelo usuário */
#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[81];
    int i, x;
    fgets(palavra, 81, stdin);
    x = strlen(palavra) - 2;
    for (i = x; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
    return 0;
}
