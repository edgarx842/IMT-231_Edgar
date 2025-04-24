//Ejercicio 6: Comparar dos números
//En un bucle in nito, el usuario ingresa dos números enteros.
//El programa debe indicar cuál es mayor o si son iguales, utilizando una función.
//El programa termina cuando el usuario ingresa dos ceros.
#include <stdio.h>
#include "funciones.h"
int main(){
    int num1, num2;
    while (1){
        printf("ingrese dos numeros enteros:\n");
        scanf("%d" "%d", &num1, &num2);
        if (num1 == 0 && num2 == 0){
            break;
        }
        compararNumeros(num1, num2);
    }
    return 0;

}