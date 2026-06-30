#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

void input(struct Student s[], int n);
void display(struct Student s[], int n);
void search(struct Student s[], int n);

int main() {
    int n, choice;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    do {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====");
        printf("\n1. Add Student Records");
        printf("\n2. Display Student Records");
        printf("\n3. Search Student by Roll Number");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                input(s, n);
                break;

            case 2:
                display(s, n);
                break;

            case 3:
                search(s, n);
                break;

            case 4:
                printf("Exiting Program...");
                break;

            default:
                printf("Invalid Choice!");
        }

    } while(choice != 4);

    return 0;
}

// Function to input records
void input(struct Student s[], int n) {
    int i;

    for(i = 0; i < n; i++) {
        printf("\nEnter details of Student %d\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }
}

// Function to display records
void display(struct Student s[], int n) {
    int i;

    printf("\n===== STUDENT RECORDS =====\n");

    for(i = 0; i < n; i++) {
        printf("\nRoll Number : %d", s[i].roll);
        printf("\nName        : %s", s[i].name);
        printf("\nMarks       : %.2f\n", s[i].marks);
    }
}

// Function to search a student
void search(struct Student s[], int n) {
    int roll, i, found = 0;

    printf("Enter Roll Number to Search: ");
    scanf("%d", &roll);

    for(i = 0; i < n; i++) {
        if(s[i].roll == roll) {
            printf("\nStudent Found!");
            printf("\nRoll Number : %d", s[i].roll);
            printf("\nName        : %s", s[i].name);
            printf("\nMarks       : %.2f\n", s[i].marks);
            found = 1;
            break;
        }
    }

    if(found == 0) {
        printf("Student Record Not Found!\n");
    }
}