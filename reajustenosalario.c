#include <stdio.h>

int main() {
    
    float sm, pr, ns;
    
    printf("Reajuste Salarial\n");
    printf("Digite o seu salario mensal: ");
    scanf("%f", &sm);
    printf("Digite o valor percentual do reajuste: ");
    scanf("%f", &pr);
    
    ns = sm + ((pr / 100.0) * sm);
    
    printf("O valor do salario apos o reajuste de %.2f%% porcento sera igual a %.2f", pr, ns);
    
    return 0;
}
 