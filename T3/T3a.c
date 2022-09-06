/* Programa que irá ler um número inteiro e imprimir se ele é par ou ímpar */
#include <stdio.h>

int main() {
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 0) {
		printf("par\n");
	} else {
		printf("impar\n");
	}
	return 0;
}