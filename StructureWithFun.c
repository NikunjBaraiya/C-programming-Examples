#include<stdio.h>
struct student
{
    char name[35];
    int age;
    char college_name[40];
};
struct student input()
{
    struct student a;
    printf("Enter your name : ");
    fflush(stdin);
    gets(a.name);
    printf("Enter Your age : ");
    scanf("%d",&a.age);
    printf("Enter your college name : ");
    fflush(stdin);
    gets(a.college_name);
    return a;
}
void display(struct student c)
{
    printf("\n%s %d %s",c.name,c.age,c.college_name);
}
int main ()
{
    struct student s;
    s=input();
    display(s);
    return 0;
}