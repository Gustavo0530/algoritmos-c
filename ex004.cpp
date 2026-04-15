#include <stdio.h>

int main() {
	
	int n1, n2, n3;
	
	printf("Digite um valor para A: ");
	scanf("%d", &n1);
	printf("Digite um valor para B: ");
	scanf("%d", &n2);
	printf("Digite um valor para C: ");
	scanf("%d", &n3);

	if (n1 > n2 && n1 > n3) {
		
		printf("O valor de A e maior que os outros tres numeros de B e C");
	}
	
	if (n2 > n1 && n2 > n3) {
		
		printf("O valor de B e maior que os outros tres numeros de A e C");
	}
	
	if (n3 > n1 && n3 > n2) {
		
		printf("O valor de C e maior que os outros tres numeros de A e B");
	}
	
	return 0;
}
	