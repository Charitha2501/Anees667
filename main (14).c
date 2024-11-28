#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;

    // Reversing the array
    for(int i = 0; i < size / 2; i++) {
        int temp = numbers[i];
        numbers[i] = numbers[size - i - 1];
        numbers[size - i - 1] = temp;
    }

    // Print reversed array
    printf("Reversed array: ");
    for(int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
