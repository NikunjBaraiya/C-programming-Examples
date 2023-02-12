#include <stdio.h>

float avg(float a, float b)
{
    return ((a + b) / 2);
}
float fun1(float (*fptr)(float, float))
{
    float a, b;

    printf("Enter the two integer : ");
    scanf("%f %f", &a, &b);

    printf("user1's Avg of %.1f and %.1f is %.1f\n", a, b, fptr(a, b));
}
float fun2(float (*fptr)(float, float))
{
    float a, b;

    printf("Enter the two integer : ");
    scanf("%f %f", &a, &b);

    printf("user2's Avg of %.1f and %.1f is %.1f\n", a, b, fptr(a, b));
}
int main()
{
    float (*ptr)(float, float);

    for (int i = 0; i < 10; i++)
    {
        ptr = avg;
        fun1(ptr);
        fun2(ptr);
    }
    return 0;
}