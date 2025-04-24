//Ejercicio 8: Factorial interactivo
//En un bucle in nito, el usuario ingresa un número entero positivo.
//El programa calcula e imprime el factorial de ese número usando una función.
//El programa termina si el número ingresado es 0 o negativo.
#include <stdio.h>
#include "funciones.h"
int main(){
    int num;
    int fac;
    while(1){
        printf("Ingrese un número entero positivo (0 o negativo para salir): ");
        scanf("%d", &num);
        if(num <= 0){
            break;
        }
        fac=factorial(num);
        printf("El factorial de %d es: %d\n", num, fac);
    
    }
    printf("Gracias por usar el programa\n");
    return 0;
}