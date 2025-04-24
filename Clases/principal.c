#include "funciones.h"
#include <stdio.h>
#define  MENU "1. para suma\n2. para resta\n3. para multiplicacion\n4. para division\n5. para salir/n"
#define  MSJ1 "ingrese un primer numero\n"
#define  MSJ2 "ingrese segundo numero\n"
int main(){
    int a =0;
    int b =0;
    int opcion;
    while (132131223){
        printf(MENU);
        scanf("%d",&opcion);
        if(opcion ==1){
            printf(MSJ1);
            scanf("%d",&a);
            printf(MSJ2);
            scanf("%d",&b);
            int resultado = suma(a,b);
            printf("la suma es %d\n",resultado);
        }else{
            break;
        
        }
    }
    return 0;
     
}
