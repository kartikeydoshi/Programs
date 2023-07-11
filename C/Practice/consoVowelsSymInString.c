#include <stdio.h>

int main() {
    char a[100];
    int space = 0, digits = 0, vowels = 0, consonants = 0, len = 0, i;
    
    printf("Enter string: ");
    fgets(a, sizeof(a), stdin);

    while (a[len] != '\n') {
        len++;
    }
    
    for (i = 0; i < len; i++) {
        if (a[i] == ' ') {
            space++;
        } else if ((a[i] >= '0' && a[i] <= '9')) {
            digits++;
        } else if ((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z')) {
            if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
                a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    
    printf("Number of blank spaces: %d\n", space);
    printf("Number of digits: %d\n", digits);
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);

    return 0;
}
