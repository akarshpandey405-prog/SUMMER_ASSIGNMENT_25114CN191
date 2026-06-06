#include <stdio.h>


// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int originalNum = num;
    int temp = num;
    int digits = 0;
    int sum = 0;

    // Step 1: Count the number of digits
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = num; // Reset temp to the original number

    // Step 2: Calculate the sum of digits raised to the power of 'digits'
    while (temp != 0) {
        int remainder = temp % 10;
        
        // round() is used because pow() returns a double and can have precision issues
        sum += round(pow(remainder, digits)); 
        
        temp /= 10;
    }

    // Step 3: Check if sum matches the original number
    return (sum == originalNum);
}

int main() {
    int number;

    printf("Enter an integer: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (isArmstrong(number)) {
        printf("%d is an Armstrong number.\n", number);
    } else {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}