#include <stdio.h>
#include <math.h>

int main() {
    
	float v, a, r;
	
	printf("Digite o raio da lata de oleo: ");
	scanf("%f", &r);
	printf("Digite a altura da lata de oleo: ");
	scanf("%f", &a);
	
	v = 3.14159 * pow(r, 2) * a;
	
	printf("O volume dessa lata de oleo seria %.3f", v);
    
    return 0;
}
 
 