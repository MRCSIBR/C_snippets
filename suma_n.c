#include <stdio.h>

// Función para calcular la suma de los primeros n números naturales
int sum(int n) {
    // Utilizamos la fórmula matemática: suma = n * (n + 1) / 2
    return n * (n + 1) / 2;
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número positivo
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);

    // Validar si el número ingresado es positivo
    if (num < 0) {
        printf("Error: El número debe ser positivo.\n");
    } else {
        // Calcular y mostrar la suma de los números desde 1 hasta num
        printf("La suma de todos los números desde 1 hasta %d es %d\n", num, sum(num));
    }

    return 0; // Indicar que el programa terminó correctamente
}
