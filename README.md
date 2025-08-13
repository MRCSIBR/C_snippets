# Fragmentos de Código C Importantes para Programadores

## Una Breve Introducción a C

¡Bienvenido al mundo de C! C es un potente lenguaje de programación de propósito general desarrollado a principios de la década de 1970. Es uno de los lenguajes de programación más influyentes de la historia y se ha utilizado para crear de todo, desde sistemas operativos (como Linux y partes de Windows) hasta aplicaciones complejas y sistemas integrados.

C es conocido por su:
*   **Velocidad:** El código C se compila en código máquina rápido, lo que lo hace ideal para aplicaciones donde el rendimiento es crítico.
*   **Control:** Proporciona acceso a bajo nivel a la memoria a través de punteros, dando a los programadores un control detallado sobre el hardware.
*   **Portabilidad:** El código C bien escrito se puede compilar para una amplia variedad de plataformas de computadora y sistemas operativos.
*   **Base:** Muchos lenguajes modernos como C++, C#, Java y Python han tomado prestada la sintaxis y los conceptos de C.

Esta guía sirve como una referencia rápida o "chuleta" para los bloques de construcción esenciales del lenguaje C. Ya seas un principiante o necesites un repaso rápido, estos fragmentos cubren los conceptos básicos que usarás todos los días.

## Cómo Compilar y Ejecutar este Código

Para usar estos fragmentos, necesitarás un compilador de C. El más común es **GCC** (GNU Compiler Collection).

1.  **Guarda el Código:** Copia un fragmento de código y guárdalo en un archivo con la extensión `.c` (por ejemplo, `hola.c`).
2.  **Abre una Terminal:** Navega hasta el directorio donde guardaste el archivo.
3.  **Compila:** Ejecuta el siguiente comando para compilar tu código:
    ```bash
    gcc tu_nombre_de_archivo.c -o nombre_del_ejecutable
    ```
    Por ejemplo:
    ```bash
    gcc hola.c -o hola
    ```
4.  **Ejecuta:** Ejecuta el programa compilado desde tu terminal:
    ```bash
    ./nombre_del_ejecutable
    ```
    Por ejemplo:
    ```bash
    ./hola
    ```

---

## Tabla de Contenido

1.  [Lo Básico](#1-lo-básico)
    *   [Estructura Básica del Programa](#11-estructura-básica-del-programa)
    *   [Comentarios](#12-comentarios)
    *   [Tipos de Datos Básicos](#13-tipos-de-datos-básicos)
    *   [Constantes y Volátiles](#14-constantes-y-volátiles)
2.  [Operadores y Expresiones](#2-operadores-y-expresiones)
    *   [Operaciones Aritméticas](#21-operaciones-aritméticas)
    *   [Asignación vs. Comparación](#22-asignación-vs-comparación)
3.  [Entrada y Salida](#3-entrada-y-salida)
    *   [E/S Estándar](#31-es-estándar)
    *   [E/S de Archivos](#32-es-de-archivos)
    *   [Verificación de Errores](#33-verificación-de-errores)
4.  [Flujo de Control](#4-flujo-de-control)
    *   [Sentencias If-Else](#41-sentencias-if-else)
    *   [Switch-Case](#42-switch-case)
    *   [Bucle For](#43-bucle-for)
    *   [Bucle While](#44-bucle-while)
    *   [Bucle Do-While](#45-bucle-do-while)
5.  [Funciones y Estructura del Programa](#5-funciones-y-estructura-del-programa)
    *   [Funciones](#51-funciones)
    *   [Argumentos de Línea de Comandos](#52-argumentos-de-línea-de-comandos)
6.  [Estructuras de Datos](#6-estructuras-de-datos)
    *   [Arreglos](#61-arreglos)
    *   [Cadenas y Funciones de Cadenas](#62-cadenas-y-funciones-de-cadenas)
    *   [Structs](#63-structs)
7.  [Punteros y Gestión de Memoria](#7-punteros-y-gestión-de-memoria)
    *   [Punteros](#71-punteros)
    *   [Asignación Dinámica de Memoria](#72-asignación-dinámica-de-memoria)

---

## 1. Lo Básico

### 1.1. Estructura Básica del Programa
Todo programa en C tiene una función `main()`, que es el punto de entrada de la ejecución. La directiva `#include <stdio.h>` incluye la biblioteca estándar de entrada/salida, dándonos acceso a funciones como `printf()`.

```c
#include <stdio.h>

int main() {
    printf("¡Hola, Mundo!\n");
    return 0; // Indica que la ejecución fue exitosa
}
```

### 1.2. Comentarios
Los comentarios son cruciales para explicar lo que hace tu código. Son ignorados por el compilador.

```c
// Este es un comentario de una sola línea.

/*
  Este es un comentario de varias líneas.
  Es útil para explicaciones más largas.
*/
```

### 1.3. Tipos de Datos Básicos
Las variables deben ser declaradas con un tipo de dato específico, que determina el tipo de datos que pueden almacenar.

```c
int integerVar = 10;          // Para números enteros
float floatVar = 3.14f;       // Para números de punto flotante de precisión simple
double doubleVar = 2.71828;   // Para números de punto flotante de doble precisión
char charVar = 'A';           // Para un solo carácter
```

### 1.4. Constantes y Volátiles
La palabra clave `const` hace que una variable sea de solo lectura. `volatile` le dice al compilador que el valor de una variable puede cambiar en cualquier momento sin ninguna acción del código que el compilador ve.

```c
const int SEGUNDOS_EN_MINUTO = 60;
volatile int lectura_sensor; // Usado en sistemas integrados, subprocesos, etc.
```

## 2. Operadores y Expresiones

### 2.1. Operaciones Aritméticas
C soporta todas las operaciones aritméticas básicas.

```c
int a = 10, b = 3;
int suma = a + b;        // 13
int diferencia = a - b; // 7
int producto = a * b;    // 30
int cociente = a / b;   // 3 (la división de enteros trunca el resultado)
int residuo = a % b;  // 1 (operador de módulo)
```

### 2.2. Asignación vs. Comparación
Un error muy común es confundir el operador de asignación (`=`) con el operador de igualdad (`==`).

```c
int x = 5; // Asignación: establece el valor de x en 5

if (x == 5) { // Comparación: comprueba si el valor de x es igual a 5
    printf("x es igual a 5\n");
} else {
    printf("x no es igual a 5\n");
}
```

## 3. Entrada y Salida

### 3.1. Entrada y Salida Estándar
Usa `printf` para salida formateada y `scanf` o `fgets` para entrada. Generalmente, `fgets` es más seguro que `scanf` para leer cadenas, ya que previene desbordamientos de búfer.

```c
#include <stdio.h>

int main() {
    int edad;
    char nombre[50];

    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin); // Lee una línea de texto (incluyendo el salto de línea)

    printf("Ingresa tu edad: ");
    scanf("%d", &edad); // Lee un entero

    printf("Hola, %sTienes %d años.\n", nombre, edad);
    return 0;
}
```

### 3.2. E/S de Archivos
C proporciona un amplio conjunto de funciones para leer y escribir en archivos.

```c
#include <stdio.h>

int main() {
    FILE *puntero_archivo;

    // Escribir en un archivo
    puntero_archivo = fopen("datos.txt", "w");
    if (puntero_archivo != NULL) {
        fprintf(puntero_archivo, "Este es un archivo de prueba.\n");
        fprintf(puntero_archivo, "Escribiendo la línea 2.\n");
        fclose(puntero_archivo);
    }
    return 0;
}
```

### 3.3. Verificación de Errores
Siempre comprueba los valores de retorno de las llamadas al sistema (como `fopen` o `malloc`). Si fallan, a menudo devuelven `NULL` y establecen un número de error global. `perror` se puede usar para imprimir un mensaje de error descriptivo.

```c
#include <stdio.h>

int main() {
    FILE *archivo = fopen("archivo_inexistente.txt", "r");
    if (archivo == NULL) {
        perror("Error al abrir el archivo");
        return 1; // Salir con un código de error
    }
    // ... operaciones con el archivo ...
    fclose(archivo);
    return 0;
}
```

## 4. Flujo de Control

### 4.1. Sentencias If-Else
La sentencia `if-else` es la herramienta fundamental para la lógica condicional.

```c
int calificacion = 85;

if (calificacion >= 90) {
    printf("Calificación: A\n");
} else if (calificacion >= 80) {
    printf("Calificación: B\n");
} else {
    printf("Calificación: C o inferior\n");
}
```

### 4.2. Switch-Case
Una sentencia `switch` es una forma limpia de manejar múltiples opciones basadas en el valor de una sola variable.

```c
int dia = 3;
switch (dia) {
    case 1: printf("Lunes\n"); break;
    case 2: printf("Martes\n"); break;
    case 3: printf("Miércoles\n"); break;
    default: printf("Otro día\n"); break;
}
```

### 4.3. Bucle For
El bucle `for` es ideal para repetir un bloque de código un número específico de veces.

```c
for (int i = 0; i < 5; i++) {
    printf("Iteración %d\n", i);
}
```

### 4.4. Bucle While
El bucle `while` repite un bloque de código mientras su condición permanezca verdadera.

```c
int contador = 0;
while (contador < 5) {
    printf("Contador: %d\n", contador);
    contador++;
}
```

### 4.5. Bucle Do-While
El bucle `do-while` es similar a un bucle `while`, pero garantiza que el bloque de código se ejecute al menos una vez.

```c
int num;
do {
    printf("Ingresa un número mayor que 10: ");
    scanf("%d", &num);
} while (num <= 10);
```

## 5. Funciones y Estructura del Programa

### 5.1. Funciones
Las funciones ayudan a organizar el código en bloques lógicos y reutilizables.

```c
#include <stdio.h>

// Declaración de la función (prototipo)
int sumar(int a, int b);

int main() {
    int resultado = sumar(5, 3);
    printf("La suma es: %d\n", resultado);
    return 0;
}

// Definición de la función
int sumar(int a, int b) {
    return a + b;
}
```

### 5.2. Argumentos de Línea de Comandos
Tu función `main` puede recibir argumentos desde la línea de comandos, lo que permite programas más flexibles. `argc` es el contador de argumentos y `argv` es un arreglo de cadenas de argumentos.

```c
#include <stdio.h>

// Ejecutar como: ./mi_programa arg1 arg2
int main(int argc, char *argv[]) {
    printf("Número de argumentos: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("Argumento %d: %s\n", i, argv[i]);
    }
    return 0;
}
```

## 6. Estructuras de Datos

### 6.1. Arreglos
Un arreglo es una colección de elementos del mismo tipo de dato, almacenados en ubicaciones de memoria contiguas.

```c
int numeros[5] = {10, 20, 30, 40, 50};
numeros[2] = 35; // Modificar un elemento
printf("Elemento en el índice 2: %d\n", numeros[2]);
```

### 6.2. Cadenas y Funciones de Cadenas
En C, una cadena es un arreglo de caracteres que termina con un terminador nulo (`\0`). La biblioteca `<string.h>` proporciona funciones esenciales para la manipulación de cadenas.

```c
#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hola";
    char str2[] = "Mundo";
    char str3[20];

    strcpy(str3, str1); // Copia str1 en str3
    strcat(str3, " ");  // Concatena " " a str3
    strcat(str3, str2); // Concatena str2 a str3

    printf("Cadena copiada: %s\n", str3);
    printf("Longitud de str1: %zu\n", strlen(str1));
    return 0;
}
```

### 6.3. Structs
Un `struct` (o estructura) te permite agrupar diferentes tipos de datos en un solo tipo de dato personalizado.

```c
#include <stdio.h>

struct Punto {
    int x;
    int y;
};

int main() {
    struct Punto p1 = {10, 20};
    printf("Coordenadas del punto: (%d, %d)\n", p1.x, p1.y);
    return 0;
}
```

### 6.4 Vector de Glib

```c
#include <glib.h>
#include <stdio.h>

int main() {
    GArray *array;
    int i;

    // Crear un nuevo GArray para almacenar valores int
    // Parámetros: terminado_en_cero=FALSE, limpiar=FALSE, tamaño_elemento=sizeof(int)
    array = g_array_new(FALSE, FALSE, sizeof(int));

    // Añadir los enteros del 0 al 4 al arreglo
    for (i = 0; i < 5; i++) {
        g_array_append_val(array, i);
    }

    // Acceder e imprimir los elementos usando la macro g_array_index
    for (i = 0; i < array->len; i++) {
        printf("%d\n", g_array_index(array, int, i));
    }

    // Liberar el arreglo y sus datos
    g_array_free(array, TRUE);

    return 0;
}
```

## 7. Punteros y Gestión de Memoria

### 7.1. Punteros
Un puntero es una variable que almacena la dirección de memoria de otra variable. Son fundamentales en C para la manipulación directa de la memoria y la construcción de estructuras de datos complejas.

```c
int var = 10;
int *ptr = &var; // ptr almacena la dirección de var

printf("Valor de var: %d\n", var);
printf("Dirección de var: %p\n", (void *)ptr);
printf("Valor en la dirección a la que apunta ptr: %d\n", *ptr); // Desreferenciación
```

### 7.2. Asignación Dinámica de Memoria
`malloc` asigna un bloque de memoria en el montón (heap) y devuelve un puntero a él. `free` libera la memoria asignada, previniendo fugas de memoria.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arregloDinamico;
    int tamano = 5;

    // Asignar memoria para 5 enteros
    arregloDinamico = (int *)malloc(tamano * sizeof(int));

    if (arregloDinamico == NULL) {
        printf("¡Falló la asignación de memoria!\n");
        return 1;
    }

    // Usar la memoria asignada
    for (int i = 0; i < tamano; i++) {
        arregloDinamico[i] = i * 10;
        printf("arregloDinamico[%d] = %d\n", i, arregloDinamico[i]);
    }

    // Liberar la memoria cuando se haya terminado
    free(arregloDinamico);
    return 0;
}
```

## Conclusión

Dominar estos fragmentos de código C fundamentales es un paso esencial para cualquier programador. Forman la base de casi todos los programas en C que escribirás o encontrarás. Al comprender y practicar estos conceptos, construyes una base sólida para enfrentar desafíos más complejos y desarrollar software eficiente y confiable.

### Próximos Pasos
*   **Practica:** Intenta combinar estos fragmentos para construir pequeños programas completos.
*   **Explora Estructuras de Datos:** Aprende a implementar listas enlazadas, pilas, colas y árboles usando structs y punteros.
*   **Estudia la Biblioteca Estándar:** Profundiza en bibliotecas como `<string.h>`, `<stdlib.h>` y `<math.h>`.
*   **Construye Sistemas:** Aprende sobre `make` y los Makefiles para gestionar proyectos más grandes.
