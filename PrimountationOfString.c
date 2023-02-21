#include<stdio.h>
#include<string.h>
void swap(char *p,char *q)
{
    char a;
    a=*p;
    *p=*q;
    *q=a;
}
void cal(char *p, int a, int b)
{
    static int count;
    int j;
    if(a==b)
    {
        count++;
        printf("(%d) %s \n",count,p);
    }
    else
    {
        for (j=a; j<=b; j++)
        {
            swap((p+a),(p+j));
            cal(p,a+1,b);
            swap((p+a),(p+j));
        }
    }
}
int main ()
{
    char a[20];
    printf("Enter the string : ");
    gets(a);
    cal(a,0,(strlen(a)-1));
    return 0;
}