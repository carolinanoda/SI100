#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int grau, i;
    float *v;
    float x, resultado;
    scanf("%d", &grau);
    grau = grau + 1;
    v = (float *) malloc(grau * sizeof(float));
    for (i = 0; i < grau; i++) {
        scanf("%f", &v[i]);
    }
    scanf("%f", &x);
    for (i = 0; i < grau; i++) {
        resultado += v[i] * pow(x, i);
    }
    printf("%.2f\n", resultado);
    free(v);
    

    return 0;
}