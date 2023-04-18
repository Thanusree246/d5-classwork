#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count[256] = {0}, length, i;
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    length = strlen(str);
    for(i = 0; i < length; i++) {
        count[str[i]]++;
    }
    printf("The count of each character in the string %s is:\n", str);
    for(i = 0; i < 256; i++) {
        if(count[i] != 0) {
            printf("%c %d\n", i, count[i]);
        }
    }
    return 0;
}
