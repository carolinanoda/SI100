#include <stdio.h>
#include <stdlib.h>

int main()
{
    int **mat;
    int **trp;
    int i, j, l, c, nlin, ncol, soma;
    soma = 0;
    scanf("%d %d", &nlin, &ncol);
    mat = (int**) malloc(nlin*sizeof(int*));
    for (i = 0; i < nlin; i++) {
        mat[i] = (int*)malloc(ncol*sizeof(int));
        for (j = 0; j < ncol; j++) {
            mat[i][j] = 0;
        }
    }
    for (l = 0; l < nlin; l++) {
        for (c = 0; c < ncol; c++) {
            scanf("%d", &mat[l][c]);
        }
    }
    trp = (int**) malloc(nlin*sizeof(int*));
    for (i = 0; i < nlin; i ++) {
        trp[i] = (int*) malloc(ncol*sizeof(int));
        for (j = 0; j < ncol; j++) {
            trp[i][j] = 0;
        }
    }
    if (nlin == ncol) {
        for (l = 0; l < nlin; l++) {
            for (c = 0; c < ncol; c++) {
                trp[l][c] = mat[c][l];
            }
        }
    }
    else {
        soma += 1;
    }
    for (l = 0; l < nlin; l++) {
        for (c = 0; c < ncol; c++) {
            if (trp[l][c] == mat[l][c]) {
                soma += 0;
            }
            else {
                soma += 1;
            }
        }
    }
    if (soma == 0) {
        printf("Eh simetrica\n");
    }
    else {
        printf("Nao eh simetrica\n");
    }
    for (i = 0; i < nlin; i++) {
        free(mat[i]);
    }
    free(mat);
    for (i = 0; i < nlin; i++) {
        free(trp[i]);
    }
    free(trp);

    return 0;
}

