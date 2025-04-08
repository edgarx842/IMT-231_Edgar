//2. Calcular la suma de los primeros N números naturales
//Consigna: Solicita al usuario un número N y muestra la suma de todos los números naturales desde 1
//hasta N.
//Pista: Acumula la suma con una variable suma dentro de un bucle for o while.
#include <stdio.h>
int main(){
    int n;
    int suma=0;
    printf("Ingrese un numero:\n ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++){
        suma +=i;
    }
    printf("La suma de los primeros %d numeros naturales es: %d\n",n,suma);
    return 0;
}