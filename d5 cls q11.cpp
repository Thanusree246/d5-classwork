#include <stdio.h>
#include <ctype.h>

int main() {
   char string[1000];
   int i = 0, j = 0;

   printf("Enter a string: ");
   fgets(string, sizeof(string), stdin);

   while (string[i] != '\0') {
      if (isalpha(string[i])) {  
         string[j] = string[i];
         j++;
      }
      i++;
   }
   string[j] = '\0';  

   printf("After removing the Output String: %s", string);
   return 0;
}
