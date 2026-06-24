#include <stdio.h>

int main (){

    
    float a[20], b[20];

    printf("Temperatura Celsius --> Fahrenheit\n");

    for (int i = 0; i < 20; i++){
        printf("Temperatura %d = ", i + 1);
        scanf("%f", &a[i]);
    }

    for (int i = 0; i < 20; i++){
        b[i] = (a[i] * 9.0 / 5.0) + 32.0;
    }

    printf("\nResultado das conversoes\n");

    for (int i = 0; i < 20; i++){
        printf("Celsius = %.2f  graus // Farenheit = %.2f graus\n", a[i], b[i]);
    }
    

    

    return 0;
}