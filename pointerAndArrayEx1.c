#include <stdio.h>
int input(int *p)// for intput the data with help of pointer 
{
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
}
int output(int *p)// for Output the data with help of pointer 
{
    for (int i = 0; i < 5; i++)
    {
        printf("\n\t%d\n", *(p + i));
    }
}
void sort(int *p)// for sort the data with help of pointer 
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                *(p + j) = *(p + j) + *(p + j + 1);
                *(p + j + 1) = *(p + j) - *(p + j + 1);
                *(p + j) = *(p + j) - *(p + j + 1);
            }
        }
    }
}
int main()
{
    int a[5];
    printf("Enter the number :");
    input(a);
    sort(a);
    output(a);
    return 0;
}