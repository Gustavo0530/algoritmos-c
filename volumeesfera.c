#include <stdio.h>
#include <math.h>

int main() {
    
    float v, r;
    
    printf("Calculo do volume de uma esfera\n");
    printf("Digite o raio: ");
    scanf("%f", &r);

	v = (4.0 / 3.0) * 3.14159 * pow(r, 2);
    
    printf("O volume dessa esfera sera igual a %.2f", v);
    
    return 0;
}
 