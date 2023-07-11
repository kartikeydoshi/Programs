#include<stdio.h>
#include<string.h>


struct cricketer {
    char name[20];
    int runs;
    int wickets;
};

int main() {
    int i, j, n, temp;
    struct cricketer c[100];

    printf("Enter the number of players: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Enter name: ");
        fgets(c[i].name, sizeof(c[i].name), stdin);

        printf("Enter runs: ");
        scanf("%d", &c[i].runs);

        printf("Enter wickets: ");
        scanf("%d", &c[i].wickets);
        getchar(); // Consume the newline character
    }

    // Sort the cricketers based on runs scored in descending order
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - 1; j++) {
            if (c[j].runs < c[j + 1].runs) {
                // Swap runs
                temp = c[j].runs;
                c[j].runs = c[j + 1].runs;
                c[j + 1].runs = temp;

                // Swap wickets
                temp = c[j].wickets;
                c[j].wickets = c[j + 1].wickets;
                c[j + 1].wickets = temp;

                // Swap names
                char tempName[20];
                strcpy(tempName, c[j].name);
                strcpy(c[j].name, c[j + 1].name);
                strcpy(c[j + 1].name, tempName);
            }
        }
    }

    printf("***Player List***\n");

    for (i = 0; i < n; i++) {
        printf("Name: %s", c[i].name);
        printf("Runs: %d\n", c[i].runs);
        printf("Wickets: %d\n", c[i].wickets);
        printf("\n");
    }

    return 0;
}
