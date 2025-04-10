//5. Invertir una cadena de texto
//Consigna: Pide al usuario que ingrese una palabra (cadena de texto) y muestra la palabra invertida.
//Pista:
//Primero, encuentra la longitud de la cadena usando un while.
//Luego recorre la cadena al revés con un for desde el último carácter hacia el primero.
#include <stdio.h>
#include <string.h>
int main(){
    char cadena[100];
    int i, longitud;
    printf("Ingrese una palabra:\n");
    scanf("%s", cadena);
    longitud = strlen(cadena);
    for(i = longitud - 1; i >= 0; i--){
        printf("%c", cadena[i]);
        printf("");

    }
    return 0;

}