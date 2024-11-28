#include <stdio.h>

int main() {
    int numbers[] = {5, 12, 7, 20, 8};
    int largest = numbers[0];  // Assume first element is the largest

    // Find the largest number
    for(int i = 1; i < 5; i++) {
        if(numbers[i] > largest) {
            largest = numbers[i];
        }
    }

    printf("The largest number is: %d\n", largest);
    return 0;
}

