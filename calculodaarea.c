#include <stdio.h>

int main() {
    
    float a, r;
    
    printf("Calculo da area de uma esfera");
    printf("Digite um valor para a circufencia: ");
    scanf("%f", &r);
    
    a = 3.14159265 * (r * r);
	
	printf("Calculando a area o resultado sera %.3f", a);
	
    return 0;
}
 