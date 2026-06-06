#include <stdio.h>

// Function to find the nth Fibonacci number
long long getNthFibonacci(int n) {
    if (n <= 0) return -1; // Invalid input
    if (n == 1) return 0;  // 1st term is 0
    if (n == 2) return 1;  // 2nd term is 1

    long long prev2 = 0; // Represents (i-2)th term
    long long prev1 = 1; // Represents (i-1)th term
    long long current = 0;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}

int main() {
    int n;

    printf("Enter the position (n) to find the Fibonacci number: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    long long result = getNthFibonacci(n);

    if (result == -1) {
        printf("Please enter a positive integer greater than 0.\n");
    } else {
        printf("The %dth Fibonacci number is: %lld\n", n, result);
    }

    return 0;
}