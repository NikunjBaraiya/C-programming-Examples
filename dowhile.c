#include <stdio.h>

int main ()

{
    int i,j=0;

    do 
    {
        printf("Enter the number : ");
        scanf("%d", &i);
        j-=i;
    }
    while(i != 0);
    printf("j = %d", j);
    return 0;
}