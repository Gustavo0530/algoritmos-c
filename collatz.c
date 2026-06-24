#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long atual = n;
    int comprimento = 1;

    printf("%lld", atual);
    while (atual != 1) {
        if (atual % 2 == 0) {
            atual = atual / 2;
        } else {
            atual = atual * 3 + 1;
        }
        printf(" %lld", atual);
        comprimento++;
    }
    printf("\nComprimento: %d\n", comprimento);

    int m;
    scanf("%d", &m);

    long long maior_num = 0;
    int maior_comprimento = 0;

    for (int i = 0; i < m; i++) {
        long long num;
        scanf("%lld", &num);
        
        long long temp = num;
        int comp_atual = 1;
        
        while (temp != 1) {
            if (temp % 2 == 0) {
                temp = temp / 2;
            } else {
                temp = temp * 3 + 1;
            }
            comp_atual++;
        }
        
        if (comp_atual > maior_comprimento) {
            maior_comprimento = comp_atual;
            maior_num = num;
        }
    }

    printf("Maior sequencia: %lld (%d termos)\n", maior_num, maior_comprimento);

    return 0;
}

