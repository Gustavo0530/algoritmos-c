#include <stdio.h>

int main() {

    float c, f;

	printf("Conversor de Temperatura de Celsius para Fahrenheit\n");
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &c);
    
    f = (9 * c + 160) / 5;

    printf("A temperatura de %.2f graus Celsius convertida para Fahrenheit sera igual a %.2f graus", c, f);
    
    return 0;
}
 
 
 