#include <stdio.h>

int main ()

{
    int n;

    printf("Enater the integer number : ");
    scanf("%d", &n);


        for(int i=1; i<=n; i++)
        {
            printf("\n");
            for(int j=1; j<=n-i; j++)
            {
                printf(" ");
            }
            for(int j=i-1; j>=1; j--)
            {
            printf("%d", j);
            }
        }
return 0;
}

       
