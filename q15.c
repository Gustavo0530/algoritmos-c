#include <stdio.h>

int main () {
	
	int v, m;
	
	printf("Digite um valor qualquer: ");
	scanf("%d", &v);
	
	m = v * 2;
	
	if (m > 30) {
		
		printf("O resultado e igual a %d", m);
	} else {
		printf("ERRO");
	}
	
	return 0;
}