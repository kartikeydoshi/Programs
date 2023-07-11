#include<stdio.h>

struct patient {
    char fName[20], mName[20], lName[20], disease[20];

    struct {
        int day, month, year;
    } dob;
};

int main() {
    int i, n, j, k;
    struct patient h[100];
    char d[20];

    printf("Enter the number of patients: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter First Name of patient: ");
        getchar();
        fgets(h[i].fName, sizeof(h[i].fName), stdin);

        printf("Enter Middle Name of patient: ");
        fgets(h[i].mName, sizeof(h[i].mName), stdin);

        printf("Enter Last Name of patient: ");
        fgets(h[i].lName, sizeof(h[i].lName), stdin);

        printf("Enter Day of admission (dd): ");
        scanf("%d", &h[i].dob.day);

        printf("Enter Month of admission (mm): ");
        scanf("%d", &h[i].dob.month);

        printf("Enter Year of admission (yyyy): ");
        scanf("%d", &h[i].dob.year);

        getchar();

        printf("Enter name of disease: ");
        fgets(h[i].disease, sizeof(h[i].disease), stdin);
    }

    printf("Enter the name of the disease to display records of the patients: ");
    fgets(d, sizeof(d), stdin);

    printf("Patients with the disease '%s':\n", d);
    for (j = 0; j < n; j++) {
        for (k = 0; h[j].disease[k] != '\n'; k++) {
            if (d[k] != h[j].disease[k]) {
                break;
            }
        }

        if (h[j].disease[k] == '\n') {
            printf("%s %s %s\n", h[j].fName, h[j].mName, h[j].lName);
        }
    }

    return 0;
}
