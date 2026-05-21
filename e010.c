#include <stdio.h>

int main(){

    int c;
    float f;

    printf("Tabela de conversao: Celsius -> Fahrenheit");

    for (c = 10 ; c <= 100 ; c += 10){

    f = (c * 1.8) + 32;
    printf("Celsius = %d | Farenheit: %.2f \n", c, f);
    }
    
return 0;
}

