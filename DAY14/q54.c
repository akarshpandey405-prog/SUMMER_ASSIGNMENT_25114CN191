#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int n = 7, key, count = 0;

    printf("Enter element: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) {
        if(arr[i] == key)
            count++;
    }

    printf("Frequency = %d", count);

    return 0;
}