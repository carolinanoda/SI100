#include <stdio.h>
void proced(int vet[], int n) {
    int j;
    int maior = vet[0];
    int menor = vet[0];
    for (j = 0; j < n; j++) {
        if (vet[j] > maior)
            maior = vet[j];
        if (vet[j] < menor)
            menor = vet[j];
    }
    printf("maior valor: %d\n", maior);
    printf("menor valor: %d\n", menor);
    
}


int main()
{
    int N, i;
    scanf("%d", &N);
    int vetor[N];
    for (i=0; i<N;i++) {
        scanf("%d", &vetor[i]);
    }
    proced(vetor, N);
    

    return 0;
}
