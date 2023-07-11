#include<stdio.h>
#include<string.h>

void reverseString(char* str) {
    int length = strlen(str);
    int i, j;
    char temp;

    for (i = 0, j = length - 1; i < j; i++, j--) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char a[100];

    printf("Enter string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = '\0';  // Remove newline character from the string

    reverseString(a);

    printf("%s is the reverse of the string\n", a);

    return 0;
}
