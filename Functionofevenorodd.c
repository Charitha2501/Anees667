#include <stdio.h>

// Function declaration
void checkEvenOdd(int num);

int main() {
    int number = 7;
    checkEvenOdd(number);  // Function call
    return 0;
}

// Function definition
void checkEvenOdd(int num) {
    if (num % 2 == 0)
        printf("%d is even.\n", num);
    else
        printf("%d is odd.\n", num);
}
