#include<stdio.h>
int main ()
{
   int a,b,c,add;
   b=0;
   c=1;
   add= b+c;

   printf("Enter the number : ");
   scanf("%d",&a);
   printf("the series is %d,%d",b,c);
   for (int i = 3; i <=a; i++)
   {
      printf(",%d",add);
      b=c;
      c=add;
      add=b+c;
   }
   return 0;
}