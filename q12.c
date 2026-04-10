#include <stdio.h>

int main () {
	
	bool n;
	
	printf("Digite um valor: ");
	scanf("%d", &n);
	
	if (!(n > 3)) {
		
		printf("O valor aceito e: %d", n);
	}
	
	return 0;
}

