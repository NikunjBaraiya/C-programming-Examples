#include <stdio.h>

int main ()
{
    int a, b;

    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    a=a-b;
    b=a+b;
    a=b-a;

    printf("Swap a = %d\n", a);
    printf("Swap b = %d\n", b);

    return 0;

}

// using bit wise operater

#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the Two values : ");
    scanf("%d%d",&a,&b);
    a ^=b;
    printf("\na = %d, and b = %d",a,b);
    b^=a;
    printf("\na = %d, and b = %d",a,b);
    a^=b;
    printf("\na = %d, and b = %d",a,b);
    return 0;
}

// using mathematical operation

#include<stdio.h>
int main ()
{
    int a=5;
    int b= 7;

    b=(a+b)-(a=b);
    printf("a=%d,b=%d",a,b);
    return 0;
}