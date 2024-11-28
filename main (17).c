#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, size, i;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Allocate memory for the array using calloc (initializes to 0)
    arr = (int*) calloc(size, sizeof(int));

    // Check if memory allocation was successful
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Print the array values (will be all zeros)
    printf("Array values after calloc:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
