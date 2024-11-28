#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr, rows, cols, i, j;

    // Input dimensions
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Allocate memory for 2D array
    arr = (int**) malloc(rows * sizeof(int*));
    for (i = 0; i < rows; i++) {
        arr[i] = (int*) malloc(cols * sizeof(int));
    }

    // Assign values and print the array
    printf("Enter values for the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Print the 2D array
    printf("2D Array values:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Free the allocated memory
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
