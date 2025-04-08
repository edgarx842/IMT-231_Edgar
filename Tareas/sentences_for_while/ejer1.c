//. Imprimir la secuencia de 1 a N
//Consigna: Escribe un programa que pida al usuario un número entero N y muestre en pantalla los
//números del 1 al N.
//Pista: Usa un bucle for o while con una variable que se incremente desde 1 hasta N.
#include <stdio.h>
int main(){
    int n;
    printf("ingrese un numero entero:\n ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n", i);
    }
    return 0;
}