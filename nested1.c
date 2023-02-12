#include <stdio.h>

int main()

{
    int i,j,k;

    printf("Enter the value of i : ");
    scanf("%d", &i);

    for(j=1;j<=i; j++)
    {
        printf("\n");
        for(k=1; k<=i-j; k++)
        {
            printf(" ");
        }
        for(k=k; k<=i; k++)
        {
            printf("%d", k);
        }
    }

    return 0;

}