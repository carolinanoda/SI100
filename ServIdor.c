/*Programa que irá corrigir uma matriz e calcular somas, medias e desvios de padrão */
#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m[n][n];
    int m1[n][n];
    int m2[n][n];
    int X, l, c, c1;
    float soma[c], media[c];
    float dp[c], soma_dp[c], soma_dp1[c];
    scanf("%d", &X);
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            scanf("%d", &m[l][c]);
        }
    }
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            m1[l][c] = m[l][c] * X;
        }
    }
    for (c = 0; c < n; c++) {
        for (l = 0; l < n; l++) {
            scanf("%d", &c1);
            m2[l][c] = m1[l][c1];
        }
    }
    printf("Matriz corrigida\n");
    for (l = 0; l < n; l++) {
        for (c = 0; c < n; c++) {
            printf("%d\t", m2[l][c]);
        }
        printf("\n");
    }
    printf("Somas::");
    for (c = 0; c < n; c++) {
        for (l = 0; l < n; l++) {
            soma[c] += m2[l][c];
        }
        printf("%.2f\t", soma[c]);
    }
    printf("\nMedias::");
    for (c = 0; c < n; c++) {
        media[c] = soma[c] / n;
    }
    for (c = 0; c < n; c++) {
        printf("%.2f\t", media[c]);
    }
    printf("\nDesvios::");
    for (c = 0; c < n; c++) {
        for (l = 0; l < n; l++) {
            soma_dp[c] += pow(m2[l][c] - media[c], 2);
        }
    }
    for (c = 0; c < n; c++) {
        soma_dp1[c] = soma_dp[c] / n;
        dp[c] = sqrt(soma_dp1[c]);
    }
    for (c = 0; c < n; c++) {
        printf("%.2f\t", dp[c]);
    } 
    printf("\n");


    return 0;
}