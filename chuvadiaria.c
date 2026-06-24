#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n); 
    
    int maior_sequencia = 0;   
    int dia_inicio_maior = 0; 

    int sequencia_atual = 0;   
    int dia_inicio_atual = 0;  

    for (int i = 1; i <= n; i++) {
        int chuva;
        scanf("%d", &chuva); 

        if (chuva > 0) { 
            
            if (sequencia_atual == 0) {
                dia_inicio_atual = i; 
            }
            
            sequencia_atual++; 

            if (sequencia_atual > maior_sequencia) {
                maior_sequencia = sequencia_atual;       
                dia_inicio_maior = dia_inicio_atual;     
            }
        } else { 
            sequencia_atual = 0; 
        }
    }

    printf("Maior sequencia: %d dias\n", maior_sequencia);
    
    if (maior_sequencia > 0) {
        printf("(comeca no dia %d)\n", dia_inicio_maior);
    }

    return 0;
}

