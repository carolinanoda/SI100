#include <stdio.h>
#define TAM 10
void proced() {
    int vetA[TAM], vetB[TAM];
    int i;
    for (i=0; i<TAM; i++) {
        scanf("%d", &vetA[i]);
        vetB[i] = vetA[i] * vetA[i] * vetA[i];
    }
    for (i=0; i<TAM; i++) 
        printf("%d\n", vetB[i]);
}


int main()
{
    proced();
    
}
