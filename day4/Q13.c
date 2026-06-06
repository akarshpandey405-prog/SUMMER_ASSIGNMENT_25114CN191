#include <stdio.h>

void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Fibonacci Series (%d terms): ", n);

    for (int i = 1; i <= n; ++i) {
        printf("%d", t1);
        
        // Add a comma after numbers, except for the last one
        if (i < n) {
            printf(", ");
        }

        // Calculate the next term
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms = 10;
    printFibonacci(terms);
    return 0;
}
// Output: Fibonacci Series (10 terms): 0, 1, 1, 2, 3, 5, 8, 13, 21, 34