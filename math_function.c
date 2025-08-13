#include <stdio.h>

/**
 * @file main.c
 * @brief Demostración de funciones aritméticas básicas en C.
 *
 * Este programa define y utiliza funciones para sumar, restar,
 * multiplicar, dividir y calcular el módulo de dos números enteros.
 */

// Prototipos de las funciones
int add(int x, int y);
int subtract(int x, int y);
int multiply(int x, int y);
int divide(int x, int y);
int modulo(int x, int y);

/**
 * @brief Punto de entrada principal del programa.
 *
 * Inicializa dos variables, llama a las funciones aritméticas
 * para operar sobre ellas y muestra los resultados en la consola.
 * @return 0 si la ejecución es exitosa.
 */
int main() {
    int a = 5, b = 3;

    int sum = add(a, b);
    int difference = subtract(a, b);
    int product = multiply(a, b);
    int quotient = divide(a, b);
    int remainder = modulo(a, b);

    printf("a = %d, b = %d\n", a, b);
    printf("Suma: %d\n", sum);
    printf("Diferencia: %d\n", difference);
    printf("Producto: %d\n", product);
    printf("Cociente: %d\n", quotient);
    printf("Residuo: %d\n", remainder);

    return 0;
}

/**
 * @brief Suma dos números enteros.
 * @param x El primer operando.
 * @param y El segundo operando.
 * @return La suma de x e y.
 */
int add(int x, int y) {
    return x + y;
}

/**
 * @brief Resta dos números enteros.
 * @param x El minuendo.
 * @param y El sustraendo.
 * @return La diferencia entre x e y.
 */
int subtract(int x, int y) {
    return x - y;
}

/**
 * @brief Multiplica dos números enteros.
 * @param x El primer factor.
 * @param y El segundo factor.
 * @return El producto de x e y.
 */
int multiply(int x, int y) {
    return x * y;
}

/**
 * @brief Realiza la división entera de dos números.
 * @param x El dividendo.
 * @param y El divisor.
 * @return El cociente entero de la división.
 */
int divide(int x, int y) {
    return x / y;
}

/**
 * @brief Calcula el residuo de la división de dos enteros.
 * @param x El dividendo.
 * @param y El divisor.
 * @return El residuo (módulo) de la división.
 */
int modulo(int x, int y) {
    return x % y;
}
