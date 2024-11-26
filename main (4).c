#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Check if the number is less than or equal to 1
    if (num <= 1) {
        printf("%d is not a prime number.\n", num);
    } else {
        // Loop to check for factors from 2 to num-1
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // If num is divisible by i, it's not prime
                break;        // Exit the loop
            }
        }

        // Output the result
        if (isPrime) {
            printf("%d is a prime number.\n", num);
        } else {
            printf("%d is not a prime number.\n", num);
        }
    }

    return 0;
}
