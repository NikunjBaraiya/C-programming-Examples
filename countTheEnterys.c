#include<stdio.h>
int main ()
{
   int a,count=1;
   for (int i = 0; i < count; i++)
   {
      printf("Enter the number : ");
      scanf("%d",&a);
      
      if (a == 0)
      {
         break;
      }
      count++;
   }
   printf("%d",count-1);
   return 0;
}