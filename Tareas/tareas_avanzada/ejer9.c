//Ejercicio 9: Inversión de número
//En un bucle in nito, el usuario ingresa un número entero positivo.
//Una función debe invertir el número (por ejemplo, 123 → 321) y mostrar el resultado.
//El programa termina cuando el número ingresado tiene solo un dígito.
#include <stdio.h>
#include "funciones.h"
int main(){
    int num;
    while(1){
        printf("Ingrese un número entero positivo (un dígito para salir): ");
        scanf("%d", &num);
        if (num <10){
            break;
        }
        int incerse = invertir(num);
        printf("El número invertido es: %d\n", incerse);
    }
    printf("Gracias por usar el programa\n");
    return 0;
}