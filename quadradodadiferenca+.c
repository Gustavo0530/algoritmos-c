#include <stdio.h>

int main() {
	
	int n1, n2, qd;
    
    printf("Quadrado da diferenca\n");
    printf("Digite um valor: ");
    scanf("%d", &n1);
    printf("Digite outro valor: ");
    scanf("%d", &n2);
    
    qd = (n1 - n2) * (n1 - n2);
    
    printf("O quadrado da diferenca entre %d e %d e igual a %d", n1, n2, qd);
    
    return 0;
}
 