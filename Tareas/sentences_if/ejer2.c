//2. Vericar si un número es positivo, negativo o cero
//Consigna: Pide al usuario que ingrese un número entero. El programa debe mostrar si el número es
//positivo, negativo o cero.
#include <stdio.h>
int main(){
    int num;
    printf("ingrese un numero entero:\n");
    scanf("%d", &num);
    if (num > 0){
        printf("el numero es positivo\n");
    }else
    if (num <0){
        printf("el numero es negativo\n");
    }else
    if (num == 0){
        printf("el numero es cero\n ");
    }else{
        return 0;
    }
}