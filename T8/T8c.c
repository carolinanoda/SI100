/* Programa q calcula o IMC de determinada pessoa */
#include <stdio.h>
#include <math.h>

int main()
{
    float imc;
    struct corpo {
        float altura;
        float peso;
        char nome[15];
    } corpo1;
    scanf("%f", &corpo1.altura);
    scanf("%f", &corpo1.peso);
    scanf("%s", corpo1.nome);
    imc = corpo1.peso / pow(corpo1.altura, 2);
    printf("%.3f\n", imc);

    return 0;
}
