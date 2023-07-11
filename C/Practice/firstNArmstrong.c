#include <stdio.h>
#include <math.h>

int main() {
    int n, x = 99, sum, copy, digit;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (n != 0) {
        x++;
        copy = x;
        sum = 0;

        while (x != 0) {
            digit = x % 10;
            sum = sum + pow(digit, 3);
            x = x/ 10;
        }

        if (sum == copy) {
            printf("%d\n", copy);
            n--;
        }

        x = copy;
    }

    return 0;
}
