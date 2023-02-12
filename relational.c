#include <stdio.h>

int main ()

{
    int a= 10;
    int b= 10;
    int c= 20;

    printf("%d == %d is %d \n" , a, b, a==b);
    printf("%d == %d is %d \n" , a, c, a==c);
    printf("%d <= %d is %d \n" , a, c, a<=b);
    printf("%d >= %d is %d \n" , a, c, a>=c);
    printf("%d < %d is %d \n" , a, b, a<b);
    printf("%d > %d is %d \n" , a, b, a>b);
    printf("%d != %d is %d \n" , a, b, a != b);
    printf("%d != %d is %d \n" , a, c, a != c);

    return 0;
    
    
}