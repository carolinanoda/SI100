#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, n;
    struct aluno {
        char nome[101];
        int ra;
        float nota1, nota2, media;
    };
    struct aluno* p;
    p = (struct aluno*) malloc(sizeof(struct aluno));
    scanf("%d", &n);
    struct aluno bib[n];
    for (i = 0; i < n; i++) {
        getchar();
        fgets(bib[i].nome, 101, stdin);
        scanf("%d", &bib[i].ra);
        scanf("%f", &bib[i].nota1);
        scanf("%f", &bib[i].nota2);
        bib[i].media = (bib[i].nota1 + bib[i].nota2) / 2;
    }
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%.2f\n", bib[i].ra, bib[i].nome, bib[i].media);
    }
    
    
    free(p);
    
    return 0;
}