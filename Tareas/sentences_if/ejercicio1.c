//1. Comparar dos números
//Consigna: Escribe un programa que solicite al usuario dos números enteros y determine cuál es mayor
//o si ambos son iguales.
#include <stdio.h>
int main(){
    int num1;
    int num2;
    printf ("ingrese el primer numero:\n");
    scanf("%d" ,&num1);
    printf("ingrese el segundo numero;\n");
    scanf("%d" ,&num2);
    if (num1 >num2){
        printf("el numero %d es mayor que el numero %d", num1, num2);
    }else
    if(num2 >num1){
        printf("el numero %d es mayor que el numero %d", num2, num1);
    }else
    if (num1 == num2){
        printf("los numeros son iguales");
    } else{
        return 0;

    }
}