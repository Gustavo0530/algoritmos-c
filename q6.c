#include <stdio.h>

int main () {
	
	int a, b, c, aux;
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	
	printf("Valores originais: %d, %d, %d", a, b, c);
	
	if (a > b) {
		
		aux = a;
		a = b;
		b = aux;
		
	}
	
	if (a > c) {
		
		aux = a;
		a = c;
		c = aux;
			
	}
	
	if (b > c) {
		
		aux = b;
		b = c;
		c = aux;
		
	}
	
	printf("\nValores em ordem crescente: %d, %d, %d", a, b, c);
	
	return 0;
	
}