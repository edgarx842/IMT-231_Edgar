//Ejercicio 7: Contador de múltiplos de 3
//El usuario ingresa números en un bucle in nito.
//El programa cuenta cuántos múltiplos de 3 se han ingresado.
//Finaliza cuando se ingresa -1 y muestra el total de múltiplos encontrados.
#include <stdio.h>
#include "funciones.h"
int main(){
    int num;
    int contador = 0;
    while(1){
        printf("ingrese un numero entero positivo (-1 para salir): ");
        scanf("%d", &num);
        if(num == -1){
            break;
        }
        contaMultideTres(num, &contador);
    }
    printf("El total de multiplos de 3 encontrados es: %d\n", contador);
    return 0;

}