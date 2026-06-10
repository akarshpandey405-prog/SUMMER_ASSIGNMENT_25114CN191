#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the triangle

    // Loop through each row
    for (int i = 1; i <= rows; i++) {
        // Print numbers from 1 to i
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
