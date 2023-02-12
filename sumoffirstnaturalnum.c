#include <stdio.h>

int main()
{
    int i, j, k=0;

    printf("Enter the integer number : ");
    scanf("%d", &j);

    for(i=0; i<=j; ++i)
    {
        k +=i;
    }
    printf("%d", k);

    return 0;
}