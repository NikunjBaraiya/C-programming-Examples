#include<stdio.h>

int main ()
{
    int i;
    printf("Enter your Age : ");
    scanf("%d", &i);

    if(i >= 18)
    {
        printf("You can Drive 😀😀😀");
    }
    else
    {
        printf("Sorry !!, You cannot Drive 😔😔😔");
    }
    return 0;
}