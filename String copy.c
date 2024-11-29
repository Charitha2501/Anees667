#include <stdio.h>
#include <string.h> // For strcpy function

int main() {
    char str1[] = "Hello";
    char str2[100];
    
    // Copy str1 into str2
    strcpy(str2, str1);
    
    printf("str2: %s\n", str2);  // Output: Hello
    
    return 0;
}
