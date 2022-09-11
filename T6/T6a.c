/*Printando a matriz inversa com números dados pelo usuário */
#include <stdio.h>
#define N 20

int main()
{
    int m[N][N];
    int NUM_LIN, NUM_COL, l, c;
    scanf("%d %d", &NUM_LIN, &NUM_COL);
    for (l = 0; l < NUM_LIN; l++)
        for (c = 0; c < NUM_COL; c++)
            scanf("%d", &m[l][c]);
    for (c = 0; c < NUM_COL; c++) {
        for (l = 0; l < NUM_LIN; l++)
            printf("%d ", m[l][c]);
            printf("\n");
    }
    return 0;
}
