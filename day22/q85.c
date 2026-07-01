#include <stdio.h>

int main() {
    char str[100], temp;
    int i, length = 0, flag = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("Palindrome String\n");
    else
        printf("Not a Palindrome String\n");

    return 0;
}