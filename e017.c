#include <stdio.h>
#include <string.h>

int main() {

    char n[50], r[10];
    float l, c, ac, at; 
    int cont;

    at = 0;
    cont = 0;

    printf("\nCalculo da area de uma residencia: \n\n");

    do {
        printf("Digite o nome do comodo (ex: Sala, Cozinha, Quarto): ");
        scanf("%s", &n);
        printf("Digite a largura do %s (em metros): ", n);
        scanf("%f", &l);
        printf("Digite o comprimento do %s (em metros): ", n);
        scanf("%f", &c);

        ac = l * c;
        at += ac;
        cont++;

        printf("Area do comodo [%s]: %.2f m2\n", n, ac);
        printf("Deseja continuar calculando novos comodos? (Sim/Nao): ");
        scanf("%s", &r);

    } while (strcmp(r, "Nao") != 0);

    printf("\n Resultado final:");
    printf("\n Total de comodos lidos: %d", cont);
    printf("\n Area total acumulada: %.2f m2", at);

    return 0;
}

