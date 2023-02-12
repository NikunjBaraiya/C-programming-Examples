#include<stdio.h>
union task
{
    int a;
    float b;
    char c;
};
int main ()
{
    union task x;
    printf("\nEnter the char : ");
    scanf("%c",&x.c);
    printf("\n%c",x.c);
    printf("\nEnter an Integer : ");
    scanf("%d",&x.a);
    printf("\n%d",x.a);
    printf("\nEnter the float : ");
    scanf("%f",&x.b);
    printf("\n%f",x.b);
    return 0;
}