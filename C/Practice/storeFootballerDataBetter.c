/* a program to store and display the name, marks in three subjects and roll number of ‘n’ students using structure. Display
Enter the football player's name, matches played and goals scored:V. Raghunath
the output in tabular form. */


#include<stdio.h>

struct football {
    char name[20];
    int goals;
    int games;
};

int main() {
    struct football a[20];

    int i, n;
    printf("Enter the number of football players: ");
    scanf("%d", &n);

    // Consume the newline character from the input buffer
    getchar();

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        fgets(a[i].name, sizeof(a[i].name), stdin);

        printf("Enter number of goals scored by this player: ");
        scanf("%d", &a[i].goals);

        printf("Enter number of games played by this player: ");
        scanf("%d", &a[i].games);

        // Consume the newline character from the input buffer
        getchar();
    }

    printf("***Players Data***\n");

    for (i = 0; i < n; i++) {
        printf("Name: %s", a[i].name);
        printf("Goals: %d\n", a[i].goals);
        printf("Games Played: %d\n", a[i].games);
        printf("\n");
    }

    return 0;
}
