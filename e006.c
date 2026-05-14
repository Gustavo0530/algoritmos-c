#include <stdio.h>

int main(){

    int i;

    printf("\nNumeros divisiveis por 4 e menores que 200\n");

    for (i = 1 ; i < 200 ; i++){

        if(i % 4 == 0){
            printf("\nNumeros encontrados: %d", i);
        }
    }

    return 0;
}

