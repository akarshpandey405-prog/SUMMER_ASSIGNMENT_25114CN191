#include <stdio.h>

int main() {
    char str[100];
    int i, j, count, max = 0;
    char ch;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count = 1;

        for (j = i + 1; str[j] != '\0' && str[j] != '\n'; j++) {
            if (str[i] == str[j])
                count++;
        }

        if (count > max) {
            max = count;
            ch = str[i];
        }
    }

    printf("Maximum Occurring Character = %c\n", ch);
    printf("Frequency = %d\n", max);

    return 0;
}