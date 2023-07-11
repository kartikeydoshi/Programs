#include<stdio.h>

struct book {
    char title[20];
    struct {
        char FirstName[20], LastName[20];
    } author;
    struct {
        char FirstName[20], LastName[20];
    } publisher;
    int Edition;
    float ISBN;
};

int main() {
    struct book b[100];
    int i, n;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar();

    for (i = 0; i < n; i++) {
        printf("Enter title of the book: ");
        fgets(b[i].title, sizeof(b[i].title), stdin);

        printf("Enter first name of the author: ");
        //getchar(); // Consume the newline character
        fgets(b[i].author.FirstName, sizeof(b[i].author.FirstName), stdin);

        printf("Enter last name of the author: ");
        fgets(b[i].author.LastName, sizeof(b[i].author.LastName), stdin);

        printf("Enter first name of the publisher: ");
        fgets(b[i].publisher.FirstName, sizeof(b[i].publisher.FirstName), stdin);

        printf("Enter last name of the publisher: ");
        fgets(b[i].publisher.LastName, sizeof(b[i].publisher.LastName), stdin);

        printf("Enter Edition Number: ");
        scanf("%d", &b[i].Edition);
        getchar(); // Consume the newline character

        printf("Enter ISBN: ");
        scanf("%f", &b[i].ISBN);
        getchar(); // Consume the newline character
    }

    printf("Title\tFauthor\tLauthor\tFpublisher\tLpublisher\tEdition\tISBN\n");
    for (i = 0; i < n; i++) {
        printf("%s\t%s\t%s\t%s\t%s\t%d\t%f\n", b[i].title, b[i].author.FirstName, b[i].author.LastName, b[i].publisher.FirstName, b[i].publisher.LastName, b[i].Edition, b[i].ISBN);
    }

    return 0;
}
