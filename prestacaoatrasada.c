#include <stdio.h>

int main() {
    
    int t;
    float nvp, vpa, tja;
    
    printf("Qual o valor da prestacao atrasada: ");
    scanf("%f", &vpa);
    printf("A prestacao esta atrasada a quantos dias: ");
    scanf("%d", &t);
    printf("Qual o valor da taxa de juros ao dia: ");
    scanf("%f", &tja);
    nvp = vpa + (vpa * (tja / 100) * t);
    
    printf("O novo valor da prestacao que antes era de %.2f atrasada a %d dia(s) somado a taxa de juros de %.2f%% porcento ao dia sera igual a  %.2f", vpa, t, tja, nvp);
    
    return 0;
}
 