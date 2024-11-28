#include <stdio.h>

// Function declaration
int max(int a, int b);

int main() {
    int num1 = 10, num2 = 20;
    printf("Maximum: %d\n", max(num1, num2));  // Function call
    return 0;
}

// Function definition
int max(int a, int b) {
    return (a > b) ? a : b;
}