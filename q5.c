#include <stdio.h>
#include <math.h>

int main() {
	
	float a, b, c, d, x1, x2;
	
	printf("Digite um valor para A: ");
	scanf("%f", &a);
	printf("Digite um valor para B: ");
	scanf("%f", &b);
	printf("Digite um valor para C: ");
	scanf("%f", &c);
	
	d = ( pow(b, 2) ) - ( 4 * a * c);
	
	if (d > 0) {
		
		x1 = ( (-b) + sqrt(d) ) / (2 * a);
		x2 = ( (-b) - sqrt(d) ) / (2 * a);
		
		printf("Existem duas raizes: %.2f e %.2f", x1, x2);
		
	} else {
		
		if (d == 0) {
			
			x1 = (-b) / (2 * a);
		
			printf("Existe uma raiz: %.2f", x1);
		} else {
		
			printf("Nao existem raizes reais");
		}
	
	}
	
	return 0;
}

