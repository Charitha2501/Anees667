#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Input the number from the user
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number to compare later
    originalNum = num;

    // Loop to reverse the number
    while (num != 0) {
        remainder = num % 10;  // Get the last digit of the number
        reversedNum = reversedNum * 10 + remainder;  // Build the reversed number
        num /= 10;  // Remove the last digit from the number
    }

    // Compare the reversed number with the original number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome.\n", originalNum);
    } else {
        printf("%d is not a palindrome.\n", originalNum);
    }

    return 0;
}
