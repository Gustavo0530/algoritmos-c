#include <stdio.h>

int main(){
	
	int  n;
	
	printf("Conversor de notas para conceito\n");
	printf("Digite sua nota: ");
	scanf("%d", &n);
	
	if (n < 0 || n > 10) {
		printf("Erro: Nota fora do intervalo permitido (0-10)");
	} else {
		
		switch(n) {
			case 10:
			case 9:
				printf("Conceito: A");
				break;
			case 8:
			case 7:
				printf("Conceito: B");
				break;
			case 6:
				printf("Conceito: C");
				break;
			case 5:
			case 4:
			case 3:
			case 2:
			case 1:
			case 0:
				printf("Conceito: D");
				return 0;
	}
	
	}	
	return 0;
}