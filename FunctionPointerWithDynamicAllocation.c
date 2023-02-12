#include<stdio.h>
#include<stdlib.h>
int* add(int *a,int *b)
{
    int *c= (int *)malloc(sizeof(int));
    printf("%d\n",c);
    *c = (*a)+(*b);
    return c ;
}
int main ()
{
    int a=5,b=3;
    int* ptr = add(&a,&b);
    printf("%d\n",*ptr);
    printf("%d\n",ptr);
    free(ptr);
    printf("%d\n",ptr);
    ptr=NULL;
    printf("%d\n",ptr);
    return 0;
}