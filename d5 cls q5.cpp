#include<stdio.h>

int main()
{
   int n, i;
   float sum = 0;

   printf("Enter the number of terms: ");
   scanf("%d",&n);

   printf("The harmonic series is: ");
   for(i=1;i<=n;i++)
   {
      printf("1/%d + ",i);
      sum += 1/(float)i;
   }

   printf("\nThe sum of the harmonic series is: %f", sum);

   return 0;
}

