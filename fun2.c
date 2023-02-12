#include<stdio.h>
struct data
{
    char a[10][10];
    char b[10][50];
    int c[10];
};
int main ()
{
    struct data d1;
    FILE *p;
    for(int i=0; i<10; i++)
    {
        fflush(stdin);
        printf("Enter your Roll number : ");
        // scanf("%d",&d1.a[i]);
        gets(d1.a[i]);
        printf("Enter your name : ");
        gets(d1.b[i]);
        printf("Enter your age : ");
        scanf("%d",&d1.c[i]);
    }
    p=fopen("Nikunj.txt","w");
    for(int i=0; i<10; i++)
    {
        fprintf(p,"Student's Roll number is = %s\n student's name is = %s\n student's age is = %d\n\n",d1.a[i],d1.b[i],d1.c[i]);
    }
    fclose(p);
    return 0;
}