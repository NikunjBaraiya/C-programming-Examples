#include<stdio.h>
int add(int x, int y)
{
    return x+y;
}
int main ()
{
    int (*ptr)(int, int);
    ptr=add;  // &add; is valid
    printf("%d",ptr(2,3)); //We( can also Write (*ptr)(2,3) is valid
    return 0;
}