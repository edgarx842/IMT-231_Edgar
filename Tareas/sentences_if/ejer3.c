//3. Evaluar si un año es bisiesto
//Consigna: Solicita al usuario que ingrese un año. El programa debe indicar si es un año bisiesto o no.
//Regla: Un año es bisiesto si es divisible entre 4 y (no es divisible entre 100 o es divisible entre 400).
//Pista: Usa una condición compuesta:
//if (condicion1 && (condicion2 || condicion3))
#include <stdio.h>
int main(){
    int anio;
    printf("ingrese un año:\n");
    scanf("%d",&anio);
    if (anio %4==0 && (anio %100!=0||  anio %400==0)){
        printf("el ano %d es bisiest\n",anio);
    }else{
        printf("el año %d no es bisiesto\n",anio);

    }
    return 0;
}