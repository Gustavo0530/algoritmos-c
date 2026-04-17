#include <stdio.h>

int main (){
	
	float d, l, cm;
	
	printf("Digite quantos km foram percorridos na viagem: ");
	scanf("%f", &d);
	printf("Digite quantos litros de combustivel foi gasto: ");
	scanf("%f", &l);
	
	cm = d / l;
	
	printf("O consumo medio de combustivel dessa viagem foi %.2f", cm);
		
	return 0;
}