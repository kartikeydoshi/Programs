//program to delete all occurence of a particular number from an array

#include <stdio.h>

int main() {
    int n, i, array[100], deleted, j;

    printf("Enter the number of values: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &array[i]);
    }

    printf("Enter the number to delete: ");
    scanf("%d", &deleted);

    for (i = 0; i < n; i++) {
        if (deleted == array[i]) {
            for (j = i; j < n - 1; j++) {
                array[j] = array[j + 1];
            }
            n--;
            i--;  // Decrement i to recheck the current index
        }
    }

    printf("New array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d\n", array[i]);
    }

    return 0;
}
