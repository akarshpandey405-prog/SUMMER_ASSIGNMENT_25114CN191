#include <stdio.h>

int main() {
    char str[100];
    int i, j, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[length] != '\0' && str[length] != '\n')
        length++;

    for (i = 0; i < length; i++) {
        for (j = i + 1; j < length; j++) {
            if (str[i] == str[j]) {
                printf("First Repeating Character = %c\n", str[i]);
                return 0;
            }
        }
    }

    printf("No Repeating Character Found.\n");

    return 0;
}