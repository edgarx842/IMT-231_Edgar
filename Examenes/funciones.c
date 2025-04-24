#include <stdio.h>
#include "funciones.h"
int primo(int num1) {
    if (num1 <= 1) {
        return 0; // No es primo
    }
    for (int i = 2; i * i <= num1; i++) {
        if (num1 % i == 0) {
            return 0; // No es primo
        }
    }
    return 1; // Es primo
}
int Factorial(int num){
    int resultado = 1;
    for(int i = 1; i <= num; i++){
        resultado *= i;
    }
    return resultado;   
}
void contadorDigitos(int num1) {
    int pares = 0, impares = 0;
    for (int i = 1; i <= num1; i++) {
        if (i % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }
    printf("Cantidad de números pares: %d\n", pares);
    printf("Cantidad de números impares: %d\n", impares);
}
void multiplos(int num1) {
    printf("Múltiplos de 3 entre 1 y %d:\n", num1);
    for (int i = 1; i <= num1; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}