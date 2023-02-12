#include <stdio.h>
int main ()
{
    int a,b=0;
    printf("Enter the number : \n");
    for (int i=0; i=b+1;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            break;
        }
       b+=1;
    }
    printf("The length of the number is %d",b);
    return 0;
    
}