// Programa que calcula o número de combinações
#include <stdio.h>

int main() {
    int n, s, i;
    long n1, s1, i1;
    while(1) {
        scanf("%d\n", &n);
        scanf("%d", &s);
        i = n - s;
        n1 = 1;
        s1 = 1;
        i1 = 1;
        while(n>1)  {
            n1 *= n--;
        }
        while(s>1) {
            s1 *= s--;
        }
        while(i>1) {
            i1 *= i--;
        }
        printf("%ld\n", n1 / (s1 * i1));
        break;
        
    }
    

    return 0;
}