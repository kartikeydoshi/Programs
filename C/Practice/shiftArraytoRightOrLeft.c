//a program in C to cyclically rotate the elements in array. Program should accept a choice in which direction to rotate i.e. left or right.
//Depending on choice it should perform cyclic rotation. Suppose array A contains elements {1, 2, 3, 4, 5} then if choice is 
//rotate right o/p should be {5, 1, 2, 3, 4} and if choice is rotate left then o/p should be {2, 3, 4, 5,1}


#include <stdio.h>

int main() {
    int n, i, a[100], temp, choice;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element: ");
        scanf("%d", &a[i]);
    }

    printf("Enter choice:\n1. Rotate Left\n2. Rotate Right\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            temp = a[0];
            for (i = 0; i < n - 1; i++) {
                a[i] = a[i + 1];
            }
            a[n - 1] = temp;
            printf("The new array is:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            break;
        case 2:
            temp = a[n - 1];
            for (i = n - 1; i >= 1; i--) {
                a[i] = a[i - 1];
            }
            a[0] = temp;
            printf("The new array is:\n");
            for (i = 0; i < n; i++) {
                printf("%d ", a[i]);
            }
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}
