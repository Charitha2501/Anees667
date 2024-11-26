#include <stdio.h>

int main() {
    int num, sum = 0, remainder;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Loop to calculate the sum of digits
    while (num != 0) {
        remainder = num % 10;  // Get the last digit of the number
        sum += remainder;       // Add the digit to the sum
        num /= 10;              // Remove the last digit from the number
    }

    // Output the result
    printf("The sum of digits is: %d\n", sum);

    return 0;
}
