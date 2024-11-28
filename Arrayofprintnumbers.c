#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};

    // Print array elements
    for(int i = 0; i < 5; i++) {
        printf("Element %d: %d\n", i + 1, numbers[i]);
    }

    return 0;
}
