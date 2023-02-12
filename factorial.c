// #include <stdio.h>

// int main()

// {
//     int a,b=1;

//     printf("Enter the number : ");
//     scanf("%d", &a);

//     for (int i = a; i >= 1; i--)
//     {
//         b=b*i;
//     }
//     printf("%d", b);
//     return 0;
// }

#include<stdio.h>

int factorial(int a)
{
    if(a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return(a * factorial(a-1));
    }
}

int main ()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    printf("Your factorial number of %d is %d", num,factorial(num));
    return 0;
}

