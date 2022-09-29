/* Programa que calcula se o segundo retangulo esta contido no primeiro */
#include <stdio.h>

int main()
{
    struct Retangulo {
        int inf_es_x;
        int inf_es_y;
        int sup_dir_x;
        int sup_dir_y;
    } ret1, ret2;
    scanf("%d %d", &ret1.inf_es_x, &ret1.inf_es_y);
    scanf("%d %d", &ret1.sup_dir_x, &ret1.sup_dir_y);
    scanf("%d %d", &ret2.inf_es_x, &ret2.inf_es_y);
    scanf("%d %d", &ret2.sup_dir_x, &ret2.sup_dir_y);
    if ((ret2.sup_dir_x <= ret1.sup_dir_x) && (ret2.sup_dir_y <= ret1.sup_dir_x) && (ret2.inf_es_x >= ret1.inf_es_x) && (ret2.inf_es_y >= ret1.inf_es_y)) {
        printf("o segundo retangulo esta contido no primeiro\n");
    }
    else {
        printf("o segundo retangulo nao esta contido no primeiro\n");
    }


    return 0;
}