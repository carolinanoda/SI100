/* Programa que intercala os 20 números digitados */
#include <stdio.h>

int main() {
    int v1[10];
    int v2[10];
    int i;
    for(i=0; i < 10; i++)
        scanf("%d", &v1[i]);
    for(i=0; i < 10; i++)
        scanf("%d", &v2[i]);
    for(i=0; i < 10; i++)
        printf("%d|%d|", v1[i], v2[i]);
    printf("\n");

    
    

    return 0;
}