#include <stdio.h>

int main() {
    int n, i;
    long long factorial = 1;

    // Input a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Check if the number is non-negative
    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Loop to calculate the factorial
        for (i = 1; i <= n; i++) {
            factorial *= i;  // Multiply factorial by the current value of i
        }

        // Output the factorial
        printf("Factorial of %d is %lld\n", n, factorial);
    }

    return 0;
}
