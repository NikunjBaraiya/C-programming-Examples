#include <stdio.h>

int main ()
{
    int i;

    printf("Enter an integer number : ");
    scanf("%d", &i);

    if(i%2 == 0)
    {
        printf("%d is an even integer", i);
    }
    else
    {
        printf("%d is an odd odd integer", i);
    }
    return 0;
}