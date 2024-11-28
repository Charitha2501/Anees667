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

    // Assign values to the array
    for (i = 0; i < size; i++) {
        arr[i] = i + 1;
    }

    // Print the array before resizing
    printf("Array before resizing:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Resize the memory allocation
    printf("Enter new size of the array: ");
    scanf("%d", &size);
    arr = (int*) realloc(arr, size * sizeof(int));

    // Check if reallocation was successful
    if (arr == NULL) {
        printf("Memory reallocation failed.\n");
        return 1;
    }

    // Assign new values if the array is larger
    for (i = size / 2; i < size; i++) {
        arr[i] = i + 1;
    }

    // Print the array after resizing
    printf("Array after resizing:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
