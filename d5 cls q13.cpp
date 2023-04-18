#include <stdio.h>

int fibonacci(int n) {
    if(n <= 1) {
        return n;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int n, i;
    printf("Input number of terms for the Series (< 20) : ");
    scanf("%d", &n);
    printf("The Series are : ");
    for(i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
