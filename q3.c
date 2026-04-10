#include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, md;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	md = (n1 + n2 + n3 + n4) / 4;
	
	if (md >= 5) {
		
		printf("O valor da media e igual a %.2f, entao o aluno esta aprovado", md);
		
	} else {
		
		printf("O valor da media e igual a %.2f, entao o aluno esta reprovado", md);
			
	}
	
	return 0;
	
}
