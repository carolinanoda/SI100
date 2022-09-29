#include <stdio.h>
int troca(int *a, int *b, int *c, int *d) {
    int aux;
    aux = *b;
    *b = *c;
    *c = aux;
    
}
int soma(int x, int y) {
    return(x+y);
}

int mult(int w, int z) {
    return(w*z);
}

int main()
{
    char operador;
    int e, f, g, h;
    scanf("%d %d %c %d %d", &e, &f, &operador, &g, &h);
    troca(&e, &f, &g, &h);
    if (operador == '+') 
        printf("%d + %di", soma(e, f), soma(g, h));
    if (operador == '*')
        printf("%d + %di", mult(e, f) - mult(g, h), mult(e, h) + mult(f, g));

    return 0;
}