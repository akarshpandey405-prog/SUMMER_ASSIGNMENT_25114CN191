#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i, count1[256] = {0}, count2[256] = {0};

    printf("Enter First String: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter Second String: ");
    fgets(str2, sizeof(str2), stdin);

    for (i = 0; str1[i] != '\0'; i++) {
        if (str1[i] != '\n')
            count1[(unsigned char)str1[i]]++;
    }

    for (i = 0; str2[i] != '\0'; i++) {
        if (str2[i] != '\n')
            count2[(unsigned char)str2[i]]++;
    }

    for (i = 0; i < 256; i++) {
        if (count1[i] != count2[i]) {
            printf("Strings are NOT Anagrams.\n");
            return 0;
        }
    }

    printf("Strings are Anagrams.\n");

    return 0;
}