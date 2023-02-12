#include <stdio.h>

float avg(float a, float b)
{
    return ((a + b) / 2);
}
float user1(float (*ptr)(float, float))
{   
    float a,b;

    printf("Enter your two numbers : \n");
    scanf("%f %f", &a, &b);
    printf("Good morning\n");
    printf("User1's avg value is : %.2f\n", ptr(a, b));
}
float user2(float (*ptr)(float, float))
{   
    float a,b;

    printf("Enter your two numbers : \n");
    scanf("%f %f", &a, &b);
    printf("Good morning\n");
    printf("User1's avg value is : %.2f\n", ptr(a, b));
}

int main()
{
    float (*fptr)(float, float);

    for(int i = 1; i<=10; i++)
    {
    fptr = avg;
    user1(avg);
    user2(avg);
    }
    return 0;
}