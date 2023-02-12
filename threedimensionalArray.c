#include <stdio.h>
int main()
{
   int x, y, z;
   printf("Enter for the School :");
   scanf("%d", &x);
   printf("Enter for the class :");
   scanf("%d", &y);
   printf("Enter for the students :");
   scanf("%d", &z);
   int a[10][10][10], b[10][10][10], c[10][10][10], i, j, k;
   printf("Enter the number :");
   for (i = 0; i < x; i++)
   {
      for (j = 0; j < y; j++)
      {
         for (k = 0; k < z; k++)
         {
            scanf("%d", &a[i][j][k]);
         }
      }
   }
   printf("Enter the number :");
   for (i = 0; i < x; i++)
   {
      for (j = 0; j < y; j++)
      {
         for (k = 0; k < z; k++)
         {
            scanf("%d", &b[i][j][k]);
         }
      }
   }

   for (i = 0; i < x; i++)
   {
      for (j = 0; j < y; j++)
      {
         for (k = 0; k < z; k++)
         {
            c[i][j][k] = a[i][j][k] + b[i][j][k];
            printf("%d ", c[i][j][k]);
         }
         printf("\n");
      }
      printf("\n");
   }

   return 0;
}