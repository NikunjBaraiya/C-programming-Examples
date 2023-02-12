#include<stdio.h>
int main()
{
    int i,j;

    printf("Enter natural Number : ");
    scanf("%d", &j);

    for(i=j; i<=1000; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}