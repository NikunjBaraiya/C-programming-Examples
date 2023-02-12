#include <stdio.h>

int main()
{
    int x, y, w;
    int a, b;
    printf("Enter the start Number :");
    scanf("%d", &a);
    printf("Enter the stop Number :");
    scanf("%d", &b);
    if (a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    printf("Armstrong values are : \n");
    for (int i = a; i <= b; i++)
    {
        y = 0;
        x = i;
        while (x != 0)
        {
            w = x % 10;
            y = y + w * w * w;
            x = x / 10;
        }
        if (y == i)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}