#include <stdio.h>

int main(){
	
	float n1, n2, n3, n4, n5, md1, md2, ne;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota: ");
	scanf("%f", &n3);
	printf("Digite a quarta nota: ");
	scanf("%f", &n4);
	
	md1 = (n1 + n2 + n3 + n4) / 4;
	
	if (md1 >= 7) {
		
		printf("O valor da media e igual a %.2f, entao o aluno esta aprovado", md1);
		
	} else {
		
		printf("Nota inferior a 7, então digite a proxima nota abaixo:");
		printf("\nDigite a quinta nota: ");
		scanf("%f", &ne);
		
		md2 = (md1 + ne) / 2;
		
		if (md2 >= 5) {
			
			printf("O valor da media e igual a %.2f, entao o aluno esta aprovado", md2);
			
		} else {
		
			printf("O valor da media e igual a %.2f, entao o aluno esta reprovado", md2);
				
		}
	
	}
	
	return 0;
	
}