#include <stdio.h>

#define MAX 10  // Maximum size of the matrix

// Function to input a matrix
void inputMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[MAX][MAX], int rows, int cols) {
    printf("\nMatrix:\n");
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to add two matrices
void addMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to subtract two matrices
void subtractMatrices(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int rows, int cols) {
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] - matrix2[i][j];
        }
    }
}

int main() {
    int rows, cols;
    
    // Input number of rows and columns for the matrices
    printf("Enter number of rows and columns of the matrices: ");
    scanf("%d %d", &rows, &cols);

    // Declare matrices
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];

    // Input matrices
    printf("Enter elements for Matrix 1:\n");
    inputMatrix(matrix1, rows, cols);

    printf("Enter elements for Matrix 2:\n");
    inputMatrix(matrix2, rows, cols);

    // Add matrices
    addMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nThe result of Matrix 1 + Matrix 2 is:\n");
    displayMatrix(result, rows, cols);

    // Subtract matrices
    subtractMatrices(matrix1, matrix2, result, rows, cols);
    printf("\nThe result of Matrix 1 - Matrix 2 is:\n");
    displayMatrix(result, rows, cols);

    return 0;
}
