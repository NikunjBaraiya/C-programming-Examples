#include <stdio.h>

int main ()
{
    int a=7, b;

    b = a;
    printf("%d \n" , b);

    b+=a;
    printf("%d \n" , b);

    b-=a;
    printf("%d \n" , b);

    b*=a;
    printf("%d \n" , b);

    b/=a;
    printf("%d \n" , b);

    b%=a;
    printf("%d \n" , b);

    return 0;
}