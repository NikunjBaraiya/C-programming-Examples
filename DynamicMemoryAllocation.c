// Memory allocation using malloc
#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int a;
    printf("Enter the number of length : ");
    scanf("%d",&a);
    int *p=(int*)malloc(a*sizeof(int));
    printf("memory loacation : %p\n",p);
    for (int i=0; i<a; i++)
    {
        p[i]=i;
    }
    for (int i=0; i<a; i++)
    {
    printf("%d\n",p[i]);

    }
    free(p);
    p=NULL;
    printf("memory loacation : %p\n",p);
    return 0;
}