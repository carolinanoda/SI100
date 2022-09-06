/* Calculadora simples que imprimirá o resultado com 3 casas decimais */
/* Escreva sem espaço */
#include <stdio.h>

int main()
{
	float a, b;
	char o;
	scanf("%f""%c""%f", &a, &o, &b);
    switch (o) {
        case '+':
	        printf("%.3f%c%.3f=%.3f\n", a, o, b, a + b);
            break;
        case '-':
            printf("%.3f%c%.3f=%.3f\n", a, o, b, a - b);
            break;
        case '*':
            printf("%.3f%c%.3f=%.3f\n", a, o, b, a * b);
            break;
        case '/':
            printf("%.3f%c%.3f=%.3f\n", a, o, b, a / b);
            break;
        default:
            printf("Operador invalido");
    }
    return 0;
}

