#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
