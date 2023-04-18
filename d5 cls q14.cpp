#include <stdio.h>

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int num1, num2, result;
    printf("Input 1st number: ");
    scanf("%d", &num1);
    printf("Input 2nd number: ");
    scanf("%d", &num2);
    result = gcd(num1, num2);
    printf("The GCD of %d and %d is: %d", num1, num2, result);
    return 0;
}
