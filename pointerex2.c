// swap with help of pointer address
#include <stdio.h>
int swap(int *x,int *y)
{
//  int a;
//  a=*x;
//  *x=*y;
//  *y=a;
*x=*x+*y;
printf("%u\n",x);
*y=*x-*y;
printf("%u\n",y);
*x=*x-*y;
printf("%u\n",x);
}
int main ()
{
    int a,b;
    printf("Enter the Numbers :");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("The value of a = %d and b = %d",a,b);
    return 0;
}