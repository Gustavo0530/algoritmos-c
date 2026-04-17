#include <stdio.h>

int main (){
	
	int qd;
	float h, m, s;
	
	printf("Conversor de Dias");
	printf("\nDigite a quantidade de dias: ");
	scanf("%d", &qd);
	
	h = qd * 24;
	m = qd * 1440;
	s = qd * 86400;
	
	
	printf("A conversao de %d dia(s) em horas e igual a %.2f horas", qd, h);
	printf("\nA conversao de %d dias(s) em minutos e igual a %.2f minutos", qd, m);
	printf("\nA conversao de %d dias(s) em segundos e igual a %.2f segundos", qd, s);

	return 0;
}