#include <stdio.h>

int main() {
    int a[5], i, largest, smallest;

    printf("Enter 5 elements:\n");

    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    largest = smallest = a[0];

    for(i = 1; i < 5; i++) {
        if(a[i] > largest)
            largest = a[i];

        if(a[i] < smallest)
            smallest = a[i];
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}