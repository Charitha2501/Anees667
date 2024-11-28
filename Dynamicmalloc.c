#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, size, i;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array
    arr = (int*) malloc(size * sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Assign values and print the array
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
        printf("%d ", arr[i]);
    }
    
    // Free the allocated memory
    free(arr);

    return 0;
}
