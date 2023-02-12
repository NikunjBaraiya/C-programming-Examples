#include <stdio.h>

int main()

{
    int i, j;

    printf("Enter two integer : ");
    scanf("%d %d", &i, &j);

    if(i >= j)
        if(i == j)
        {
            printf("%d == %d", i, j);
        } 
        else
        {
            printf("%d > %d", i, j);
        }
    else
    {
        printf("%d < %d", i, j);
    }

    return 0;

}