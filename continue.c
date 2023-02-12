#include<stdio.h>

int main()
{
    int i,age;
    for (i = 1; i<=5; i++)
    {
        printf("Enter your age : \n");
        scanf("%d", &age);

        if(age>=18)
        {
            printf("You can Drive\n");
            continue;
        }
        else
        {
            printf("You cannot Drive\n");
        }
    }    
    return 0;
}