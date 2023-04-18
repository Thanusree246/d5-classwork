
#include <stdio.h>
void add(int *num1, int *num2, int *result) {
    *result = *num1 + *num2;
}

int main() {
    int num1, num2, result;
    printf("Enter two numbers to add:\n");
    scanf("%d %d", &num1, &num2);

    add(&num1, &num2, &result);

    printf("The sum of %d and %d is %d\n", num1, num2, result);

    return 0;
}


        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
	

