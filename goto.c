#include<stdio.h>

int main ()
{
    int a;

    for(int b=0; b<=100; b++)
    {
        //printf("Enater your number : ");
        //scanf("%d", &a);
        printf("%d\n", b);

        if(b>=18)
        {
        goto end;
        }
    }
    end:
    printf("Your number is invalid\n");
        return 0;
}