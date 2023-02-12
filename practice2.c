#include<stdio.h>

int main ()

{
    int i;

    printf("If you cleard Maths, Press : 1\n");
    printf("If you cleard Science, Press : 2\n");
    printf("If you cleard Maths and Science, Press : 3\n");
    printf("Enter your pass subject : ");
    scanf("%d", &i);

    if(i == 3)
    {
        printf("You have cleared Maths and Science,You Won the 45 Rs.");
    }
    else if(i == 2)
    {
        printf("You have cleared Maths,You Won the 15 Rs.");
    }
    else if(i == 1)
    {
        printf("You have cleared Science,You Won the 10 Rs.");
    }
    return 0;
}