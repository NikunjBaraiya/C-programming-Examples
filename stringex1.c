#include <stdio.h>
int main ()
{
    char c[3][15];
    for(int i=0; i<3; i++)
   {
    //   gets(c[i]);
    gets(&c[i][0]);
   }
   for(int i=0; i<3; i++)
   {
    //   puts(c[i]);
    printf("%s\n",c[i]);
   }
    return 0;
    
}