//clasificacion de numeros pares e impares
//en un bucle infinito, el usuario debe ingresar numeros enteros
//por cada numero ingresada el programa debe determinar si es par e impar usando una funcion 
// programa finaliza cuando el usuario ingresa -1.
#include <stdio.h>
#define   MSJ1   "ingrese el numero: numero\n"
int main(void){
    int num;
    printf(MSJ1);
    scanf("%d", &num);
    while (num != -1){
        if (num % 2 == 0){
            printf("par\n");
        }else{
            printf("impar\n");
        }
        printf(MSJ1);
        scanf("%d", &num);
    }

}
 