#include <stdio.h>

int main() {
    // 1. Basic for loop
    printf("For loop:\n");
    for(int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // 2. While loop
    printf("While loop:\n");
    int j = 1;
    while(j <= 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n\n");

    // 3. Do-while loop (executes at least once)
    printf("Do-while loop:\n");
    int k = 10;
    do {
        printf("%d ", k);
        k++;
    } while(k <= 5);
    printf("\n\n");

    // 4. Nested loops
    printf("Nested loops (3x3 grid):\n");
    for(int row = 1; row <= 3; row++) {
        for(int col = 1; col <= 3; col++) {
            printf("(%d,%d) ", row, col);
        }
        printf("\n");
    }
    printf("\n");

    // 5. Infinite loop with break
    printf("Controlled infinite loop:\n");
    int count = 1;
    for(;;) {
        printf("%d ", count);
        if(count++ >= 5) break;
    }
    printf("\n\n");

    // 6. Goto loop (not recommended but possible)
    printf("Goto loop:\n");
    int m = 1;
    LOOP_START:
    printf("%d ", m);
    if(++m <= 5) goto LOOP_START;
    printf("\n");

    return 0;
}
