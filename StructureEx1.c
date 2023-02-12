#include<stdio.h>
struct data
{
    char name[20];
    int age;
    char college_name[20];
};
int main ()
{
    struct data student;
    printf("Enter the Name :");
    scanf("%s",&student.name);
    printf("Enter your Age : ");
    scanf("%d",&student.age);
    printf("Enter your college name  : ");
    scanf("%s",student.college_name);
    printf("Your name : %s\nYour age : %d\nYour college Name : %s",student.name,student.age,student.college_name);
    return 0;
}