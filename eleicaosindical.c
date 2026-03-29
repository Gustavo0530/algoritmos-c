#include <stdio.h>

int main() {
    
    int a, b, c, vb, vn, vt, vv;
    
    
    printf("Eleicao sindical para presidencia\n");
    printf("Digite o numero de votos para cada candidato abaixo:\n");
    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);
    printf("C: ");
    scanf("%d", &c);
    printf("Digite o numero de votos nulos e em brancos abaixo:\n");
    printf("Nulos: ");
    scanf("%d", &vn);
    printf("Em branco: ");
    scanf("%d", &vb);
    
    vt = a + b + c + vn + vb;
    vv = a + b + c;
    
    printf("\nRelacao dos votos em geral:\n");
    printf("Votos totais: %d", vt);
    printf("\nVotos validos: %d", vv);
    printf("\nVotos nulos: %d", vn);
    printf("\nVotos em branco: %d\n", vb);
    
    printf("\nPercentual dos votos em relacao aos votos totais:");
    printf("\nCandidato A: %.3f%%", (a * 100.0 ) / vt );
    printf("\nCandidato B: %.3f%%", (b * 100.0 ) / vt );
    printf("\nCandidato C: %.3f%%\n", (c * 100.0 ) / vt );
    
    printf("\nPercentual dos votos  nulos e em brancos:");
    printf("\nVotos nulos: %.3f%%", (vn * 100.0 ) / vt );
    printf("\nVotos em brancos: %.3f%%", (vb * 100.0 ) / vt );
    
    return 0;
}
 