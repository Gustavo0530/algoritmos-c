#include <stdio.h>

int main() {

    char ponto;
    int pontosa = 0, pontosb = 0, gamesa = 0, gamesb = 0;

    printf("Digite a sequencia de pontos (separados por espaco e terminando com .): A");

    do {

        scanf("%c", &ponto);

        if (ponto == 'A' || ponto == 'a'){
            pontosa++;
        } else if (ponto == 'B' || ponto == 'b'){
            pontosb++;
        }

        if (pontosa >= 4 && (pontosa - pontosb) >= 2) {
            gamesa++;
            pontosa = 0;
            pontosb = 0;
        } else if (pontosb >= 4 && (pontosb - pontosa) >= 2) {
            gamesb++;
            pontosa = 0;
            pontosb = 0;

        }

    } while (ponto != '.');

    printf("\nPlacar\n");
    printf("A: %d games\n", gamesa);
    printf("B: %d games\n", gamesb);

    return 0;
}

