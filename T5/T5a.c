/* Programa em que o usuário digita 20 notas e depois verifica se uma determinada nota foi digitada */
#include <stdio.h>

int main()
{
    float notas[20];
    int i;
    float a;
    for(i = 0; i < 20; i++) {
        scanf("%f", &notas[i]);
    }
    do {
        printf("Verifique se determinado numero foi digitado (digite um numero negativo para terminar o programa):\n");
        scanf("%f", &a);
        if (a < 0) {
            break;
        }
        int b = 0;
        for(i = 0; i < 20; i++) {
            if(a == notas[i]) {
            b = 1;
            }
        }
        if(b == 1) {
            printf("existe\n");
        }
        else {
            printf("nao existe\n");
        }
    } while(a > 0);
    

    return 0;
}