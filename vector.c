#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * @brief Explicación del concepto de vector en C
 *
 * Un vector en C es una estructura de datos que representa una colección lineal y homogénea
 * de elementos del mismo tipo, almacenados en posiciones contiguas de memoria. 
 * 
 * A diferencia de los arreglos estáticos, cuyo tamaño debe definirse en tiempo de compilación,
 * un vector dinámico en C puede cambiar su tamaño durante la ejecución del programa,
 * permitiendo agregar o eliminar elementos según sea necesario.
 *
 * Debido a que C no incluye soporte nativo para vectores dinámicos como en C++,
 * la implementación de un vector en C se realiza generalmente mediante estructuras y punteros,
 * gestionando manualmente la memoria con funciones como malloc, realloc y free.
 *
 * Características principales:
 * - Tamaño dinámico: el vector puede crecer o reducirse automáticamente.
 * - Acceso aleatorio: los elementos pueden accederse directamente mediante índices.
 * - Almacenamiento contiguo en memoria: permite acceso rápido y eficiente.
 *
 * Esta flexibilidad hace que los vectores sean ideales para manejar listas de elementos
 * cuando el tamaño no es conocido de antemano o puede variar durante la ejecución.
 */



int main() {
    int n = 128; // Size of the vector
    int upperBound = 256; // Upper bound for random values (0 to upperBound-1)
    
    int *vector = malloc(n * sizeof(int));
    if (!vector) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Seed the random number generator
    srand((unsigned int)time(NULL));

    // Assign random values
    for (int i = 0; i < n; i++) {
        vector[i] = rand() % upperBound;
    }

    // Print the vector
    for (int i = 0; i < n; i++) {
        printf("%d ", vector[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(vector);

    return 0;
}
