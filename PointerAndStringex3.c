#include <stdio.h>
int length (char *p)
{
    int i;
    for (i=0; *(p+i)!='\0';i++);
    return i;
}
char* rev(char *p)
{
    int i;
    for (i=0; *(p+i)!='\0'; i++);
    // printf("%d",i);
        for(int j =0; j < (i/2); j++)
        {
            // printf("\n%d",j);
            *(p+j) = *(p+j) + *(p+i-1-j);
            *(p+i-1-j) = *(p+j) - *(p+i-1-j);
            *(p+j) = *(p+j) - *(p+i-1-j);
        }
        printf("%s",p);
    // return p;
}
int main ()
{
    char a[50];
    printf("Enter the name : ");
    // scanf("%s",a);
    gets(a);
    // printf("%d",length(a));
    // printf("%s",rev(a));
    rev(a);
    return 0;
}