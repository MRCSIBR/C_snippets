#include <stdio.h>

int sum(int n) {
    int total = 0;
    for(int i = 1; i <= n; i++) {
        total += i;
    }
    return total;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Sum of all numbers from 1 to %d = %d", num, sum(num));
    return 0;
}
