#include <stdio.h>

int main()

{
    int i,j;

    printf("Enter your Number : ");
    scanf("%d", &j);

    for(i=1; i<=20; i++)
    {
        printf("%d X %d = %d\n", j,i,i*j);
        if(i>=10)
        {
            printf("You cannot go for forthere");
            break;
        }
    }
    return 0;
}