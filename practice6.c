#include <stdio.h>
#include<string.h>

int main()
{
    char name[30];

    scanf("%s",name);

    if(strcmp(name, "Nikunj")==0)
    {
        printf("You like cheese too!");
    }
    else
    {
        printf("I like cheese more.");
    }

    return 0;
}