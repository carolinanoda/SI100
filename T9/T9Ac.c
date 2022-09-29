#include <stdio.h>
#include <math.h>

float soma(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float divi(float num1, float num2);
float pot(float num1, float num2);

int main()
{
    float num1, num2;
    char o;
    scanf("%f%c%f", &num1, &o, &num2);
    if (o == '+') {
        printf("%.3f\n", soma(num1, num2));
    }
    if (o == '-') {
        printf("%.3f\n", sub(num1, num2));
    }
    if (o == '*') {
        printf("%.3f\n", mult(num1, num2));
    }
    if (o == '/') {
        printf("%.3f\n", divi(num1, num2));
    }
    if (o == '^') {
        printf("%.3f\n", pot(num1, num2));
    }

    return 0;
}

float soma(float num1, float num2)
{
    return(num1 + num2);
}
float sub(float num1, float num2)
{
    return(num1 - num2);
}
float mult(float num1, float num2)
{
    return(num1 * num2);
}
float divi(float num1, float num2)
{
    return(num1 / num2);
}
float pot(float num1, float num2)
{
    return(pow(num1, num2));
}