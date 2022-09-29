/* Programa que ira calcular se dois pontos sao iguais atraves da equacao de distancia euclidiana */
#include <stdio.h>
#include <math.h>

int main()
{
    double distancia;
    struct Ponto {
        double x;
        double y;
    } ponto1, ponto2;
    scanf("%lf %lf", &ponto1.x, &ponto1.y);
    scanf("%lf %lf", &ponto2.x, &ponto2.y);
    distancia = sqrt(pow(ponto1.x - ponto2.x, 2) + pow(ponto1.y - ponto2.y, 2));
    if (distancia < 0.0000001) {
        printf("os pontos sao iguais\n");
    }
    else {
        printf("os pontos nao sao iguais\n");
    }
    return 0;
}