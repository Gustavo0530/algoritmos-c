#include <stdio.h>

int main(){

    int r, dividendo, divisor, q;
    q = 0;

    printf("Divisao por Subtracoes Sucessivas\n");
    printf("Digite o dividendo (numero a ser dividido): ");
    scanf("%d", &dividendo);
    printf("Digite o divisor: ");
    scanf("%d", &divisor);
    
    r = dividendo;

    if (divisor == 0){
        printf("\nErro: Divisao por zero nao existe na matematica!\n");
    } else if ( divisor < 0 || dividendo < 0) {
        printf("\nEste programa foi desenhado para valores positivos, conforme o enunciado.\n");
    } else {

        while (r >= divisor) {
            r = r - divisor;
            q++;
        }

        printf("\nResultado da Divisao Inteira:");
        printf("\nO divisor %d cabe %d vezes no dividendo %d.", divisor, q, dividendo);
        printf("\nResto da divisao: %d", r);
    }

    return 0;
}