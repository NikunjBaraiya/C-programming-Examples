#include<stdio.h>
enum boolean
{
    false,true
};
enum boolean fun1(int x)
{
if (x%2==0)
{
    return (true);
}
else 
{
    return (false);
}
}
int main ()
{
    int a;
    enum boolean result;
    printf("Enter the Number : ");
    scanf("%d",&a);
    result=fun1(a);
    if(result == true)
    {
        printf("is Even");
    }
    else
    {
        printf("Is Odd");
    }
    return 0;
}


//

#include<stdio.h>
enum month
{
    jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec
};
int main ()
{
    enum month a;
    int b;
    for(int i=0; i<14; i++)
    {
    printf("\nEnter the month in mumber  :");
    scanf("%d",&b);
    a=b;
    switch(a)
    {
        case jan:
        printf("\nJanuary");
        break;
        case feb:
        printf("\nFebruary");
        break;
        case mar:
        printf("\nMarch");
        break;
        case apr:
        printf("\nApril");
        break;
        case may:
        printf("\nMay");
        break;
        case jun:
        printf("\nJune");
        break;
        case jul:
        printf("\nJuly");
        break;
        case aug:
        printf("\nAugust");
        break;
        case sep:
        printf("\nSeptember");
        break;
        case oct:
        printf("\nOctober");
        break;
        case nov:
        printf("\nNovember");
        break;
        case dec:
        printf("\nDecember");
        break;
        default:
        printf("\nNot possible");
        goto end;
    }
    }
    end:
    return 0;
}