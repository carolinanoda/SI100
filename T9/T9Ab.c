#include <stdio.h>
#include <math.h>

float media_aritmetica(float nota_1, float nota_2);
float media_geometrica(float nota_1, float nota_2);

int main()
{
    char c = getchar();
    float nota_1, nota_2;
    scanf("%f %f", &nota_1, &nota_2);
    if (c == 'A') {
        printf("%.3f\n", media_aritmetica(nota_1, nota_2));
    }
    if (c == 'B') {
        printf("%.3f\n", media_geometrica(nota_1, nota_2));
    }
    

    return 0;
}
float media_aritmetica(float nota_1, float nota_2)
{
    return((nota_1 + nota_2) / 2);
}
float media_geometrica(float nota_1, float nota_2)
{
    return(sqrt(nota_1 * nota_2));
}