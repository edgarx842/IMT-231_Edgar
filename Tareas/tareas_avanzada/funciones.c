#include <stdio.h>
#include "funciones.h"
int clasificationParImpar(int num){
    if(num % 2 == 0){
        printf("El número %d es par.\n", num);
    }else{
        printf("El número %d es impar.\n", num);
    }
    return 0;
}
int contar_Digitos(int num){
    int contador =0;
    while(num != 0){
        num = num/10;
        contador++;
    }
    return contador;
}
int acolumular(){
    int suma = 0;
    int numero ;
    while (1){
        printf("ingrese un numero positivo: ");
        scanf("%d", &numero);
        if (numero <0){
            break;
        }
        suma += numero;

    }
    return suma;
    
}
int suma(int num1, int num2){
    return num1 + num2;
}
int resta(int num1, int num2){
    return num1 - num2;
}
int multiplicacion(int num1, int num2){
    return num1 * num2;
}
int compararNumeros(int a, int b){
    if(a > b){
        printf("El número %d es mayor que el %d.\n", a, b);
    }else if(b >a){
        printf("El número %d es mayor que el %d.\n", b, a);
    }else{
        printf("los numeros %d y %d son iguales.\n", a, b);

    }
}
void contaMultideTres(int num, int *contador){
    if(num % 3 == 0){
        (*contador)++;
    }
    
}
int factorial(int num){
    int resultado = 1;
    for(int i = 1; i <= num; i++){
        resultado *= i;
    }
    return resultado;
}
int invertir(int num){
    int invertido = 0;
    while(num != 0){
        invertido = invertido * 10 + num % 10;
        num /= 10;
    }
    return invertido;
}
    