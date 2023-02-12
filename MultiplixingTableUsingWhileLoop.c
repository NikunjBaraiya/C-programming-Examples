#include<stdio.h>

int main ()
{
    int Number,i;

    printf("Enter the Multiplixing Table Number : ");
    scanf("%d", &Number);

    i=1;
    while(i<=10)
    {
        printf("%d X %d = %d\n", Number, i, Number*i);
        i++;
    }
    return 0;

}