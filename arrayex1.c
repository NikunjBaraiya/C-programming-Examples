#include <stdio.h>
int main()
{
   int a[10], i, j, k;
   printf("Enter the number :");
   scanf("%d", &j);
   for (i = 0; i < j; i++)
   {
      printf("Enter the value :");
      scanf("%d", &a[i]);
   }

   for (k = 0; k < j; k++)
   {
      // printf("%d", a[0]);
      if (a[0] < a[k])
      {
         a[0] = a[k];
         
      }
   }
   printf("higher value of all values is %d\n", a[0]);

   return 0;
}