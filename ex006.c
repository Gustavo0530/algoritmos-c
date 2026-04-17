#include <stdio.h>

int main() {
	
	int c, t, q;
	
	printf("\nCardapio:\n");
	printf("\n01: Cachorro Quente - R$ 10,00\n");
	printf("02: Hamburguer - R$ 15,00\n");
	printf("03: Cheeseburguer - R$ 18,00\n");
	printf("\nDigite o codigo do produto: ");
	scanf("%d", &c);
	
	if (c != 01 && c != 02 && c != 03 ) {
		printf("Codigo invalido");
	} else {
		
		printf("Digite a quantidade: ");
		scanf("%d", &q);
		
	switch (c) {
		case 01:
			t = q * 10.00;
			printf("\nValor total: %d", t);
			break;
		case 02: 
			t = q * 15.00;
			printf("\nValor total: %d", t);
			break;
		case 03:
			t = q * 18.00;
			printf("\nValor total: %d", t);
			break;
	}
	}
	
	return 0;
}