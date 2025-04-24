//Ejercicio 3: Simulación de semáforo
//Usar un typedef enum para representar los estados de un semáforo:
//typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
//Inicialmente el estado es ROJO. En cada iteración del bucle in nito, el estado cambia cíclicamente: ROJO →
//VERDE → AMARILLO → ROJO... En cada cambio, se imprime un mensaje correspondiente al estado.
//El programa termina automáticamente después de 10 ciclos.
#include <stdio.h>
#include <unistd.h> // Para la función sleep
typedef enum { ROJO, VERDE, AMARILLO } Semaforo;
int main() {
    Semaforo estado = ROJO; // Estado inicial
    int ciclos = 10; // Número de ciclos

    for (int i = 0; i < ciclos; i++) {
        switch (estado) {
            case ROJO:
                printf("Semáforo en ROJO\n");
                estado = VERDE;
                break;
            case VERDE:
                printf("Semáforo en VERDE\n");
                estado = AMARILLO;
                break;
            case AMARILLO:
                printf("Semáforo en AMARILLO\n");
                estado = ROJO;
                break;
        }
        sleep(1); // Espera 1 segundo entre cambios
    }

    return 0;
}

