/*Programa que leia dez inteiros e imprima quantos são pares e quantos são ímpares */
#include <stdio.h>

int main()
{
    int i, n, o, e;
    o = 0;
    e = 0;
    for(i=1; i <= 10; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            e++;
        }
        else {
            o++;
        }
    }
    printf("%d pares, %d impares\n", e, o);

    

    return 0;
}