#include <stdio.h>

int find_largest(int arr[], int n) {
    if(n == 1) {
        return arr[0];
    }
    int max = find_largest(arr, n-1);
    if(max > arr[n-1]) {
        return max;
    }
    else {
        return arr[n-1];
    }
}

int main() {
    int n, arr[100], i;
    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &n);
    printf("Input %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Largest element of an array is: %d", find_largest(arr, n));
    return 0;
}
