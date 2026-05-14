#include <stdio.h>

int main(){

    int i;

    printf("Numeros impares de 1 a 20\n");
    for (i = 0 ; i <= 20 ; i++){
        if(i % 2 != 0){
            printf("Numero encontrado: %d\n", i);
        }
    }
}
