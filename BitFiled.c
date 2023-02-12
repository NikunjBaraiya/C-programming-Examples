#include<stdio.h>
struct date
{
    int d:5;// out of 4 byte we gave only 5 bit
    int m:4;// out of 4 byte we gave only 4 bit
    int y;
};
int main ()
{
    struct date d={8,02,2023};
    printf("Size of d = %d",sizeof(d));
    return 0;
}