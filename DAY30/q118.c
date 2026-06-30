#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char author[50];
};

int main() {
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);

    struct Book b[n];

    // Input book details
    for(i = 0; i < n; i++) {
        printf("\nEnter details of Book %d\n", i + 1);

        printf("Book ID: ");
        scanf("%d", &b[i].id);

        printf("Book Title: ");
        scanf(" %[^\n]", b[i].title);

        printf("Author Name: ");
        scanf(" %[^\n]", b[i].author);
    }

    // Display library records
    printf("\n===== LIBRARY RECORD =====\n");

    for(i = 0; i < n; i++) {
        printf("\nBook %d\n", i + 1);
        printf("Book ID     : %d\n", b[i].id);
        printf("Book Title  : %s\n", b[i].title);
        printf("Author Name : %s\n", b[i].author);
    }

    return 0;
}