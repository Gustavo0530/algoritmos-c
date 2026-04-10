#include <stdio.h>

int main () {
	
	int a, b, c, s;
	
	printf("Digite um valor para A: ");
	scanf("%d", &a);
	printf("Digite um valor para B: ");
	scanf("%d", &b);
	printf("Digite um valor para C: ");
	scanf("%d", &c);
	
	s = a + b + c;
	
	if (s >= 100) {
		
		printf("A soma dos valores e igual a %d", s);
	} else {
		printf("ERRO");
	}
	
	return 0;
}

