#include <stdio.h>

int main() {
	
	int s, i, f;
	
	printf("Digite sua idade: ");
	scanf("%d", &i);
	printf("Digite seu salario: ");
	scanf("%d", &s);	
	printf("Voce tem um fiador?");
	printf("\nDigite 1 para sim ou 0 para nao: ");
	scanf("%d", &f);
	
	if (i >= 18 && s >= 2000) {
		
		printf("Emprestimo aprovado por criterios de idade e renda");
	} else if (f == 1){
		
		printf("Emprestimo aprovado por criterio de ter fiador");
	} else {
		
		printf("Emprestimo reprovado");
	}	
}
