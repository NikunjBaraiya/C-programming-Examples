#include<stdio.h>
int GCD(int a, int b)
{
    if(a==b)
    return a;
    if (a%b == 0)
    return b;
    if (b%a == 0)
    return a;
    if (a>b)
    {
        return GCD(a%b,b);
    }
    else
    {
     return GCD(a,b%a);
    }
}
int main ()
{
    int a,b,c;
    printf("Enter the Two Numbers : ");
    scanf("%d %d",&a,&b);
    c=GCD(a,b);
    printf("GCD is %d",c);
    return 0;
}


//
#include<stdio.h>
int main ()
{
    int a,b,k=0,l=0;
    int x[10],y[10];
    printf("Enter the Number : ");
    scanf("%d%d",&a,&b);
    for(int i=1; i<=a; i++)
    {
        if(a%i == 0)
        {
            x[k]=i;
            k++;
        }
    }
    
    for(int i=1; i<=b; i++)
    {
        if(b%i == 0)
        {
            y[l]=i;
            l++;
        }
    }
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<l; j++)
        {
            if(x[i] != 1)
            {
            if(x[i] == y[j])
                printf("%d\n",x[i]);
            }
        }
    }
    return 0;
}