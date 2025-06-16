/**
 * Prints Pascal's Triangle up to a given number of rows.
 *
 * Pascal's Triangle is a triangular array of the binomial coefficients, where each
 * number is the number of combinations of a certain size that can be selected
 * from a set of items.
 *
 * For example, the first few rows of Pascal's Triangle are:
 *
 *       1
 *      1 1
 *     1 2 1
 *    1 3 3 1
 *   1 4 6 4 1
 *
 * @param numRows The number of rows of Pascal's Triangle to print.
 */

 #include <stdio.h>


 void printPascalsTriangle(int numRows) {
    int row, col;
    int triangle[numRows][numRows];

    // Initialize the first row
    triangle[0][0] = 1;

    // Print each row
    for (row = 0; row < numRows; row++) {
        // Print leading spaces
        for (col = 0; col < numRows - row; col++) {
            printf("  ");
        }

        // Print the row
        for (col = 0; col <= row; col++) {
            // Calculate the binomial coefficient
            if (col == 0 || col == row) {
                triangle[row][col] = 1;
            } else {
                triangle[row][col] = triangle[row-1][col-1] + triangle[row-1][col];
            }

            printf("%4d", triangle[row][col]);
        }

        printf("\n");
    }
}

int main() {
    printPascalsTriangle(5);
    return 0;
}
