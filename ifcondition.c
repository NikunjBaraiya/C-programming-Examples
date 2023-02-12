#include <stdio.h>

int main ()

{
    int a;

    printf("Enter the value : ");
    scanf("%d", &a);

    
    if (a<5)
    {
        printf("Enterd value : %d" , a);
    }
    else
    {
        printf("Wrong value");
    }

    return 0;

}