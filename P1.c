#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    if(n < 2) {
        printf("Array must contain at least 2 elements.");
        return 0;
    }

    int arr[n];

    printf("Enter elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(i = 0; i < n; i++) {
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        }
        else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    if(secondSmallest == INT_MAX)
        printf("No second smallest element exists.");
    else
        printf("Second smallest element = %d", secondSmallest);

    return 0;
}