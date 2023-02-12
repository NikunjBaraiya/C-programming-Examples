#include <stdio.h>

int main ()

{
    int a;
    int b;
    int c;


    printf("Enater Value of a : ");
    scanf("%d", &a);
    printf("Enater Value of b : ");
    scanf("%d", &b);
    
    c= a+b;
    printf("%d + %d =  %d\n", a, b, c);

    return 0;

}