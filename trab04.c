#include <stdio.h>
#include <string.h>

int main()
{
    char tipo[5];
    int numPer_int = 0;
    int numPer_float = 0;
    char escolha[5];
    int escolha2, escolha3;
    struct i_p {
        char pergunta[103];
        int alt0, alt1, alt2;
        int correta;
    }; struct i_p bib[50];
    struct f_p {
        char pergunta[103];
        float alt0, alt1, alt2;
        int correta;
    }; struct f_p bibf[50];

    while (strcmp(tipo, "FIM") != 0) {
        scanf("%s", tipo);
        if (strcmp(tipo, "INT") == 0) {
            getchar();
            fgets(bib[numPer_int].pergunta, 103, stdin);
            scanf("%d %d %d", &bib[numPer_int].alt0, &bib[numPer_int].alt1, &bib[numPer_int].alt2);
            scanf("%d", &bib[numPer_int].correta);
            numPer_int++;
        }
        if (strcmp(tipo, "FLOAT") == 0) {
            getchar();
            fgets(bibf[numPer_float].pergunta, 103, stdin);
            scanf("%f %f %f", &bibf[numPer_float].alt0, &bibf[numPer_float].alt1, &bibf[numPer_float].alt2);
            scanf("%d", &bibf[numPer_float].correta);
            numPer_float++;
        }
    }
    printf("Prepare-se para o Show do Miltao!\n");
    while (strcmp(escolha, "FIM") != 0) {
        scanf("%s", escolha);
        if (strcmp(escolha, "FIM") == 0) {
            break;
        }
        scanf("%d", &escolha2);
        if (strcmp(escolha, "INT") == 0) {
            printf("Pergunta: %s", bib[escolha2].pergunta);
            printf("Alternativa 0: %d\nAlternativa 1: %d\nAlternativa 2: %d\n", bib[escolha2].alt0, bib[escolha2].alt1, bib[escolha2].alt2);
            scanf("%d", &escolha3);
            if (bib[escolha2].correta == escolha3) {
                printf("Parabens, voce acertou!\n");
            }
            else {
                printf("Resposta errada, voce perdeu!\n");
                break;
            }
        }
        if (strcmp(escolha, "FLOAT") == 0) {
            printf("Pergunta: %s", bibf[escolha2].pergunta);
            printf("Alternativa 0: %.2f\nAlternativa 1: %.2f\nAlternativa 2: %.2f\n", bibf[escolha2].alt0, bibf[escolha2].alt1, bibf[escolha2].alt2);
            scanf("%d", &escolha3);
            if (bibf[escolha2].correta == escolha3) {
                printf("Parabens, voce acertou!\n");
            }
            else {
                printf("Resposta errada, voce perdeu!\n");
                break;
            }
        }
    }

    return 0;
}