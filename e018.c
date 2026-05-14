#include <stdio.h>

int main() {

    int v, mai, men, i;

    i = 1;

    printf("Descubra o Maior e o Menor Valor\n");
    printf("Digite valores inteiros positivos (ou um negativo para sair):\n\n");

    while (1){

        printf("Digite um valor: ");
        scanf("%d", &v);
    
        if (v < 0) {
            printf("\nNumero negativo detectado!\n");
            break;
        }

        if(i == 1 ) {

            mai = v;
            men = v;
            i = 0;
        
        } else {

            if (v > mai) {
                mai = v;
            }

            if (v < men){
                men = v;
            }
        }
    }
    
    if (i == 0){

        printf("\nMaior valor informado: %d", mai);
        printf("\nMenor valor informado: %d", men);

    } else {

        printf("\nNenhum valor positivo foi informado.\n");

    }

    return 0;
}
