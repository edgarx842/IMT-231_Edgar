#include <stdio.h>
#include "funciones.h"
typedef enum { PRIMO = 1, FACTORIAL, CONTADIGITOS, MULTIPLOS, SALIR } Menu;

int main() {
    int opcion; // Cambiar a int para usar con scanf
    int num1, num2;

    while (1) {
        printf("Elija una opción:\n");
        printf("1. verificar si un numero es primo\n");
        printf("2. contar el factorial de un numero\n");
        printf("3. Contar números pares e impares entre 1 y N\n");
        printf("4. Mostrar múltiplos de 3 entre 1 y N.\n");
        printf("5. salir del programa\n");
        scanf("%d", &opcion); // Leer como int

        // Convertir a tipo Menu
        Menu opcionMenu = (Menu)opcion;

        switch (opcionMenu) {
            case PRIMO:
                printf("Ingrese un número:\n");
                scanf("%d", &num1);
                primo(num1);
                if (primo(num1) == 1) {
                    printf("El número %d es primo\n", num1);
                } else {
                    printf("El número %d no es primo\n", num1);
                }

                break;
            case FACTORIAL:
                printf("Ingrese un número:\n");
                scanf("%d",&num1);
                if(num1 <= 0){
                    break;
                }
                int fac=Factorial(num1);
                printf("El factorial de %d es: %d\n", num1, fac);
            
                break;
            case CONTADIGITOS:
                printf("Ingrese un numero:\n");
                scanf("%d", &num1);
                contadorDigitos(num1);
                break;
            case MULTIPLOS:
                printf("ingrese un numero:\n");
                scanf("%d", &num1);
                multiplos(num1);
                printf("Los múltiplos de 3 entre 1 y %d son:\n", num1);
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