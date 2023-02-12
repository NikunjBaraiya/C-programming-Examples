#include <stdio.h>

int main ()
{
    int Number,i;

    printf("Enter the Multiplixer Table Number : ");
    scanf("%d", &Number);

    printf("Table of %d : \n", Number);

    for(i=1; i<=10; i++)
    {
    printf("%d X %d = %d\n", Number, i, Number*i);
    }   
    getchar();
    return 0;
}