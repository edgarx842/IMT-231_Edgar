//Ejercicio 2: Contador de dígitos
//En un bucle innito, el usuario debe ingresar un número entero positivo.
//El programa muestra cuántos dígitos tiene el número utilizando una función.
//Finaliza cuando el número ingresado sea 0.
#include <stdio.h>
#include "funciones.h"
int main(){
    printf("Ingrese un número entero positivo (0 para salir): ");
    int num;
    int con;
    scanf("%d", &num);
    con= contar_Digitos(num);
    printf("El número ingresado tiene %d dígitos.\n", con);
    return 0;


}


