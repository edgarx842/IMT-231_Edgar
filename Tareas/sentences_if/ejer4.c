//4. Clasicar la edad
//Consigna: Pide al usuario que ingrese su edad y muestra un mensaje según el rango:
//Menor de 13 años: “Infancia”
//Entre 13 y 17 años: “Adolescencia”
//Mayor o igual a 18: “Adultez”
//Pista: Usa condiciones encadenadas con if, else if y else.
#include <stdio.h>
int main(){
    int edad;
    printf("ingrese se edad\n");
    scanf("%d",&edad);
    if (edad<13){
        printf("infancia\n");
    }else
    if (edad>=18){
        printf("adultez\n");
    }else
    if (edad>=13 && edad<=17){
        printf("adolescencia\n");
    }else{
        printf("edad no valida\n");
    }
    return 0;

}