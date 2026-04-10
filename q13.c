#include <stdio.h>

int main () {

    char n[50], s;
    
    printf("Digite seu nome: ");
    scanf("%s", &n);
    printf("Digite seu sexo: ");
    scanf(" %c", &s);
    
    if (s == 'm' || s == 'M') {
        printf("Seja bem vindo, Sr. %s", n);
    } else {
        if (s == 'f' || s == 'F') {
        printf("Seja bem vindo, Sra. %s", n);
        } else {
            printf("Sexo invalido");
        }    
    }
    
    return 0;
}