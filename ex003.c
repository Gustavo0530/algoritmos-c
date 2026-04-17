#include <stdio.h>

int main(){

	int n;
	
	printf("Digite um numero qualquer: ");
	scanf("%d", &n);
	
	if (n % 2 == 0) {
		
		printf("O numero %d e par", n);
	} else {
		
		printf("O numero %d e impar", n);
	}
	
	return 0;
}