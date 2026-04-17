#include <stdio.h>
#include <math.h>

int main () {

    float p, a, imc;
    
    printf("Calculadora IMC\n");
    printf("Digite sua altura: ");
    scanf("%f", &a);
    printf("Digite seu peso: ");
    scanf("%f", &p);
    
    imc = p / (pow(a, 2));
    
    printf("Seu IMC: %.2f \n", imc);
    
    if (imc >= 30) {
        printf("Resultado: Obesidade");
    } else if ( imc >= 25) {
            printf("Resultado: Sobrepeso");
    } else if ( imc >= 18.5) {
             printf("Resultado: Peso Normal");
    } else {
        printf("Resultado: Abaixo do Peso");
    }               
                    
    return 0;
}