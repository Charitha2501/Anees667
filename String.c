#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], str3[100];
    int choice;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0'; 

    printf("\nChoose an operation to perform on strings:\n");
    printf("1. Length of the first string\n");
    printf("2. Concatenate both strings\n");
    printf("3. Copy the first string to the third string\n");
    printf("4. Compare both strings\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Length of the first string: %lu\n", strlen(str1));
            break;
        case 2:
            strcat(str1, str2);  /
            printf("Concatenated string: %s\n", str1);
            break;
        case 3:
            strcpy(str3, str1);  
            printf("Copied string: %s\n", str3);
            break;
        case 4:
            if (strcmp(str1, str2) == 0)
                printf("Both strings are equal.\n");
            else
                printf("Both strings are not equal.\n");
            break;
        default:
            printf("Invalid choice! Please choose between 1-4.\n");
    }

    return 0;
}




