#include <stdio.h>

int main (){

    int v, c;
    float m, s;
    
    c = 0;
    s = 0;

    printf("Somatorio Sucessivo | (Digite um numero negativo para parar)\n\n");

    while (1){

        printf("Digite um valor: ");
        scanf("%d", &v);
    

        if (v < 0) {
            printf("\nNumero negativo detectado!\n");
            break;
        }
        
        s += v;
        c++;
    }

    if(c > 0){

        m = s / c;

        printf("\nResultados finais:\n");
        printf("Total de valores lidos: %d\n10", c);
        printf("Somatorio acumulado: %.2f\n", s);
        printf("Media dos valores: %.2f\n", m);
    }

    return 0;
}

