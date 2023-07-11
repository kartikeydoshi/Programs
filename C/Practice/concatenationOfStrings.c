#include<stdio.h>
#include<string.h>

int main() {
    char a[100], b[100];

    printf("Enter first string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';  // Remove newline character from the first string

    printf("Enter second string: ");
    fgets(b, sizeof(b), stdin);
    b[strcspn(b, "\n")] = '\0';  // Remove newline character from the second string

    strcat(a, b);  // Concatenate the second string to the first string

    printf("The concatenated string is: %s\n", a);

    return 0;
}
