#include <stdio.h>

int main () {
	
	int n;
	
	printf("Digite um valor entre 1 e 9: ");
	scanf("%d", &n);
	
	if ( n >= 1 && n <= 9) {
		
		printf("O valor esta na faixa permitida");
	} else {
		
		printf("O valor esta fora da faixa permitida");	
	}
}