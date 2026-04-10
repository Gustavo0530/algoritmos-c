#include <stdio.h>

int main () {
	
	int a,b, d;
	
	printf("Digite um numero para A: ");
	scanf("%d", &a);
	printf("Digite um numero para B: ");
	scanf("%d", &b);
	
	if (a > b) {
		
		d = a - b;
		printf("A diferenca entre %d e %d e igual a: %d", a, b, d);
		
	} else {
		
		d = b - a;
		printf("A diferenca entre %d e %d e igual a: %d", a, b, d);
		
	}
	
	return 0;
}