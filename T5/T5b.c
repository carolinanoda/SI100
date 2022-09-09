/* Programa que calcule a soma da quantidade de produtos vendidos e a soma do valor total */
#include <stdio.h>

int main() {
    int qtde[10];
    float valor[10];
    int somaqtde = 0;
    float somavalor = 0;
    int i;
    for(i = 0; i < 10; i++)
        scanf("%d", &qtde[i]);
    for(i = 0; i < 10; i++)
        scanf("%f", &valor[i]);
    for(i = 0; i < 10; i ++)
        somaqtde += qtde[i];
    for(i = 0; i < 10; i ++)
        somavalor += valor[i] * qtde[i];
    printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %d\n", somavalor, somaqtde);

    return 0;
}
