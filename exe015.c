#include <stdio.h>

int main (){

    int a[30], par, impar;
    
    impar = 0;
    par = 0;

    printf("Digite um valor inteiro:\n");

    for (int i = 0; i < 30; i++){
        printf("Numero %d = ", i + 1);
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < 30; i++){
        if (a[i] % 2 == 0){
            par++;
        } else {
            impar++;
        }
    }

   printf("\nResultado:\n");
   printf("Quantidade de numeros pares = %d\n", par);
   printf("Quantidade de numeros impares = %d", impar);

    return 0;
}