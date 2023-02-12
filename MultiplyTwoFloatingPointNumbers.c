#include <stdio.h>

int main()

{
    double a;
    double b;
    double c;

    printf("Enater the value of a = ");
    scanf("%lf" , &a);
    printf("Enter the value of b = ");
    scanf("%lf" , &b);

    printf("%lf X %lf = %lf" , a, b, a*b);

    return 0;

}