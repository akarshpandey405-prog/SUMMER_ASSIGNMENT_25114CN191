#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 45, 7, 89, 34};
    int n = 5;

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    printf("Second Largest = %d", secondLargest);

    return 0;
}