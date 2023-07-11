#include<stdio.h>
#include<string.h>

void reverseString(char* str, char* b) {
    int length = strlen(str);
    int i, j;

    for (i = 0, j = length - 1; i < length; i++, j--) {
        b[i] = str[j];
    }

    b[length] = '\0';  // Add null terminator at the end of the reversed string
}

int main() {
    char a[100], b[100];

    printf("Enter string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';  // Remove newline character from the string

    reverseString(a, b);

    printf("%s is the reverse of the string\n", b);

    if (strcmp(a, b) == 0) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
