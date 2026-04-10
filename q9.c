#include <stdio.h>

int main () {
	
	int a, b, c, d, e, maior, menor;
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	printf("Digite um valor para D: ");
	scanf("%d", &d);
	printf("Digite um valor para E: ");
	scanf("%d", &e);
	
	maior = a;
	menor = a;
	
	if (b > maior) {
		
		maior = b;
	}
	
	if (b < menor) {
		
		menor = b;
	}
	
	if (c > maior) {
		
		maior = c;
	}
	
	if (c < menor) {
		
		menor = c;
	}
	
	if (d > maior) {
		
		maior = d;
	}
	
	if (d < menor) {
		
		menor = d;
	}
	
	if (e > maior) {
		
		maior = e;	
	}
	
	if (e < menor) {
		
		menor = e;	
	}
	
	printf("O maior numero digitado foi: %d", maior);
	printf("\nO menor numero digitado foi: %d", menor);
	
	return 0;
	
}