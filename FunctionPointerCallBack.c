#include<stdio.h>
char name()
{
    char a[10];
    printf("Enter your name : ");
    gets(a);
    puts(a);
}
char ptr(char (*ptr1)()) //function pointer as argument
{
    ptr1(); //callback function "ptr1"points to
}
int main ()
{
    // char (*ptr2)()=name;
    // ptr2(ptr);
    ptr(name); // we can also write like this
    return 0;
}