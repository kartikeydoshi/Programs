#include<stdio.h>

int main() {
    FILE *fp;
    char name[20];
    int roll, choice = 0;

    while (choice != 3) {
        printf("1. New Entry\n2. Display entries\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                fp = fopen("records.txt", "a");
                printf("Enter name and roll number of the student: ");
                scanf("%s %d", name, &roll);
                fprintf(fp, "%s %d\n", name, roll);
                fclose(fp);
                break;
            case 2:
                fp = fopen("records.txt", "r");
                printf("Name\tRoll Number\n");
                while (fscanf(fp, "%s %d", name, &roll) == 2) {
                    printf("%s\t%d\n", name, roll);
                }
                fclose(fp);
                break;
            case 3:
                break;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
