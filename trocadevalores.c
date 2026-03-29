#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float a1, a2, b1, b2;
    
    printf("Digite um valor para A: ");
    scanf("%f", &a1);
	printf("Digite um valor para B: ");    
	scanf("%f", &b1);
	
	a2 = b1;
	b2 = a1;
	
	printf("Ao executar a troca dos valores entre A e B, o valor de A passou a ser %f e o valor de B passou a ser %f", a2, b2);
    return 0;
}
 