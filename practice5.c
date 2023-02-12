#include<stdio.h>
int main ()
{
    int celsius,i;
    float fahrenheit;

    for(i=1; i<=10; i++)
    {
        printf("Enter the celsius : ");
        scanf("%d", &celsius);

        fahrenheit = celsius * 1.8 + 32;
        printf("%d celsius = %f fahrenheit\n",celsius,fahrenheit);
        continue;
    }
    return 0;
}