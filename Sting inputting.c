#include <stdio.h>

int main() {
    char str[100];
    
    // Reading a string with spaces using fgets
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    
    printf("You entered: %s\n", str);
    
    return 0;
}

