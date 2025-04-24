//Ejercicio 4: Acumulador de valores positivos
//En un bucle in nito, el usuario ingresa valores enteros positivos.
//El programa va acumulando la suma total.
//Cuando el usuario ingresa un número negativo, se muestra el total acumulado y el programa termina.
#include <stdio.h>
#include "funciones.h"
int main(){
    int total =acolumular();
    printf("El total acumulado es: %d\n", total);
    return 0;
}