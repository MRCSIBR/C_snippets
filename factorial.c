#include <stdio.h>

// Función para calcular el factorial de un número de manera iterativa
long long factorial(int n) {
    long long resultado = 1; // Inicializamos el resultado en 1

    // Calculamos el factorial multiplicando los números desde 1 hasta n
    for (int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado; // Retornamos el resultado
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
        // Calcular y mostrar el factorial del número ingresado
        printf("El factorial de %d es %lld\n", num, factorial(num));
    }

    return 0; // Indicar que el programa terminó correctamente
}
