#include<stdio.h>
#define sum(a,b) a*b // 5+6*5+5 = 5+30+5 =40
#define sum(a,b) (a)*(b) // (5+6)*(5+5) = 11*10 =110

int main ()
{
    // int c,d;
    // scanf("%d%d",&c,&d);
    printf("%d",sum(5+6,5+5));
    return 0;
}