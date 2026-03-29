#include <stdio.h>

int main() {
    
    float c, f;

	printf("Conversor de Temperatura de Fahrenheit para Celsius\n");
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c = ((f - 32) * 5) / 9;

    printf("A temperatura de %.2f graus Fahrenheit convertida para Celsius seria igual a %.2f", f, c);
    
    return 0;
}
 
 