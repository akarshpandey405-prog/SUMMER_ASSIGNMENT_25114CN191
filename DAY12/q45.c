#include <stdio.h>

int palindrome(int n) {
    int temp = n, rev = 0, rem;

    while(temp != 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    return (rev == n);
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(palindrome(n))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}