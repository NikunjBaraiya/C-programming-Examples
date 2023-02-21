#include<stdio.h>
void toh(int n, char a, char b, char c)
{
    if(n>=1)
    {
        toh(n-1,a,c,b);
        printf("%d is = %c to %c\n",n-1,a,c);
        toh(n-1,b,a,c);
    }
}
int main ()
{
    int a;
    char x,y,z;
    x='A';
    y='B';
    z='C';
    printf("Enter the no. of disk : ");
    scanf("%d",&a);
    // printf("%d",a);
    // printf("%c",x);
    // printf("%c",y);
    // printf("%c",z);
    toh(a,x,y,z);
    return 0;
}