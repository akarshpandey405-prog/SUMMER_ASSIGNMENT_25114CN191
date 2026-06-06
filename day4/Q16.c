#include <stdio.h>
#include <math.h>

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    if (num < 0) return 0; // Negative numbers are typically not considered Armstrong numbers

    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num; 

    // Calculate the sum of digits raised to the power of 'digits'
    while (temp != 0) {
        int remainder = temp % 10;
        sum += round(pow(remainder, digits)); 
        temp /= 10;
    }

    return (sum == originalNum);
}

int main() {
    int start, end;
    int count = 0;

    printf("Enter lower limit of the range: ");
    scanf("%d", &start);
    printf("Enter upper limit of the range: ");
    scanf("%d", &end);

    printf("\nArmstrong numbers between %d and %d are:\n", start, end);

    // Loop through the entire range
    for (int i = start; i <= end; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0) {
        printf("None found in this range.");
    }
    
    printf("\nTotal Armstrong numbers found: %d\n", count);

    return 0;
}