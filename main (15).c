#include <stdio.h>

int main() {
    int original[] = {10, 20, 30, 40, 50};
    int copied[5];

    // Copy elements from original array to copied array
    for(int i = 0; i < 5; i++) {
        copied[i] = original[i];
    }

    // Print copied array
    printf("Copied array: ");
    for(int i = 0; i < 5; i++) {
        printf("%d ", copied[i]);
    }
    printf("\n");

    return 0;
}
