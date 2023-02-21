#include<stdio.h>
#include<stdlib.h>

int *add(int *a, int *b)
{

int *c=(int*)malloc(sizeof(int));
    *c=(*a)+(*b);
    return c;
}
int main ()
{
    int a=3,b=6;
    int *ptr=add(&a,&b);
    printf("%d",*ptr);


    free(ptr);
    printf("%p",ptr);

    return 0;
}

// using static variable

#include<stdio.h>
#include<stdlib.h>

int *add(int *a, int *b)
{
static int c;
c=(*a)+(*b);
return &c;
}
int main ()
{
    int a,b;
    printf("Enter the two Numbers : ");
    scanf("%d%d",&a,&b);
    
    int *ptr=add(&a,&b);
    printf("sum of %d and %d is %d",a,b,*ptr);
    return 0;
}
