//5. Vericar si un número es par o impar
//Consigna: Escribe un programa que lea un número entero y determine si es par o impar.
#include <stdio.h>
int main(){
    int numero;
    printf("ingres un numero:\n");
    scanf("%d",&numero);
    if(numero%2==0){
        printf("El numero es par\n");
    }else
    if(numero%2!=0){
        printf("El numero es impar\n");
    }else{
        return 0;
        
    }
}