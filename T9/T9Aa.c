#include <stdio.h>
#include <math.h>

float volume_esfera()
{
    float raio;
    float volume;
    scanf("%f", &raio);
    float pi = 3.14159;
    volume = pow(raio, 3) * pi * 4/3;
    printf("%.2f\n", volume);
}

int main()
{
    volume_esfera();

    return 0;
}