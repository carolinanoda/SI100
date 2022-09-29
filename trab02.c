/*Triângulo de Floyd, que substitui as linhas ímpares por 1 e as soma, e as linhas pares por 0, somando ao final o total de números. */
#include <stdio.h>

int main()
{
    int n, i, j;
    int count = 0;
    scanf("%d", &n);
        for(i=1; i <= n; i++) {
            if(i % 2 != 0) {
                for(j=1; j <= i; j++) {
                    printf("1");
                    count++;
                }
                printf("=%d", j - 1);
                printf("\n");
            }
            else {
                for(j=1; j <= i; j++) {
                    printf("0");
                    count++;
                }
                printf("\n");
            }
        }
    printf("%d\n", count);
        
    return 0;
}
