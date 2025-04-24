//Ejercicio 5: Mini menú con switch
//Mostrar el siguiente menú en un bucle in nito:
//Sumar dos números
//Restar dos números
//Multiplicar dos números
//Salir
//Para cada opción, usar funciones separadas y switch-case.
//El programa naliza cuando se elige la opción 4
#include <stdio.h>
#include "funciones.h"

// Definición del enum para las opciones del menú
typedef enum { SUMAR = 1, RESTAR, MULTIPLICAR, SALIR } Menu;

int main() {
    int opcion; // Cambiar a int para usar con scanf
    int num1, num2;

    while (1) {
        printf("Elija una opción:\n");
        printf("1. Sumar dos números\n");
        printf("2. Restar dos números\n");
        printf("3. Multiplicar dos números\n");
        printf("4. Salir\n");
        scanf("%d", &opcion); // Leer como int

        // Convertir a tipo Menu
        Menu opcionMenu = (Menu)opcion;

        switch (opcionMenu) {
            case SUMAR:
                printf("Ingrese dos números:\n");
                scanf("%d %d", &num1, &num2);
                printf("La suma es: %d\n", suma(num1, num2));
                break;
            case RESTAR:
                printf("Ingrese dos números:\n");
                scanf("%d %d", &num1, &num2);
                printf("La resta es: %d\n", resta(num1, num2));
                break;
            case MULTIPLICAR:
                printf("Ingrese dos números:\n");
                scanf("%d %d", &num1, &num2);
                printf("La multiplicación es: %d\n", multiplicacion(num1, num2));
                break;
            case SALIR:
                printf("Gracias por usar el programa\n");
                return 0;
            default:
                printf("Opción inválida\n");
        }
    }

    return 0;
}