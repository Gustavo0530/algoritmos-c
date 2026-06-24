#include <stdio.h>

int main () {

    int n;
    
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("ERRO - Quantidade Invallida!\n");
        return 1;
    }

    float notas[n];

    float soma_geral = 0.0;
    float soma_aprovados = 0.0;
    int cont_aprovados = 0;
    int acima_da_media = 0;

    printf("\nDigite as Notas (entre 0 a 10)\n");

    for (int i = 0; i < n; i++) {

        do {
            printf("Nota do aluno %d: ", i + 1);
            scanf("%f", &notas[i]);

            if (notas[i] < 0 || notas[i] > 10) {
                printf("ERRO - A nota deves estar entre 0 e 10. Tente novamente.\n");
            }
            
        } while (notas[i] < 0 || notas[i] > 10);

        soma_geral += notas[i];

        if (notas[i] >= 6.0) {
            soma_aprovados += notas[i];
            cont_aprovados++;
         }
    }

    float media_geral = soma_geral / n;

    for (int i = 0; i < n; i++) {
        if (notas[i] > media_geral) {
            acima_da_media++;
        }
    }

    printf("\nResultado Final\n");
    printf("Media Geral: %.1f\n", media_geral);

    if (cont_aprovados > 0){
        float media_aprovado = soma_aprovados / cont_aprovados;
        printf("Media Aprovados: %.2f\n", media_aprovado);
    } else {
        printf("Ninguem passou\n");
    }

    printf("Acima da Media: %d\n", acima_da_media);

    return 0;
}

