//4. Contar la cantidad de dígitos de un número
//Consigna: Escribe un programa que solicite un número entero y muestre cuántos dígitos tiene.
//Pista: Divide el número entre 10 en cada iteración del while, y cuenta cuántas veces lo haces hasta
//que llegue a 0.
#include <stdio.h>
int main(){
    int num,dig=0;
    printf("ingrese un numero entero:\n");
    scanf("%d",&num);

    if(num==0){
        dig=1;

    }else{
        if (num<0){
            dig=-dig;
        }
        while(num>0){
            num=num/10;
            dig=dig+1;
        }
    }
    printf("digito %d\n",dig);
    return 0;
}