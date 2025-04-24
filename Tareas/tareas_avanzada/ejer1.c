//Ejercicio 1: Clasi cación de números pares e impares
//En un bucle in nito, el usuario debe ingresar números enteros.
//Por cada número ingresado, el programa debe determinar si es par o impar usando una función.
//El programa naliza cuando el usuario ingresa -1.
#include <stdio.h>
#include "funciones.h"
#define   MSJ1   "ingrese el numero: numero\n"
int main(){
    int num;
    while(1){
        printf(MSJ1);
        scanf("%d", &num);
        if(num == -1){
            break;
        }
        int clas = clasificationParImpar(num);
    }
    printf("Gracias por usar el programa\n");
    return 0;
}