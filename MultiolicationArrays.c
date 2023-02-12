// array multiplication 2X2
#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2], m = 0, n = 1;
    printf("Enter the value for A : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the value for B : \n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    for (int k = 0; k < 2; k++)
    {
        for (int l = 0; l < 2; l++)
        {
            c[k][l] = a[k][m] * b[m][l] + a[k][n] * b[n][l];
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

//
#include <stdio.h>
int main()
{
    int v, w, x, y;
    printf("Enter the array-1 Raw or column : \n");
    scanf("%d%d", &v, &x);
    printf("Enter the array-2 Raw or column : \n");
    scanf("%d%d", &y, &w);
    if (x == y)
    {
        int a[v][x], b[y][w], c[v][w], sum;
        printf("Enter the value for Array-1 : \n");
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < x; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the value for Array-2 : \n");
        for (int i = 0; i < y; i++)
        {
            for (int j = 0; j < w; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        // c[0][0] = a[0][0] * b[0][0] + a[0][1] * b[1][0];
        // c[0][1] = a[0][0] * b[0][1] + a[0][1] * b[1][1];
        // c[1][0] = a[1][0] * b[0][0] + a[1][1] * b[1][0];
        // c[1][1] = a[1][0] * b[0][1] + a[1][1] * b[1][1];
        for (int k = 0; k < v; k++)
        {
            for (int l = 0; l < w; l++)
            {
                sum = 0;
                for (int m = 0; m < x; m++)
                {
                    sum = sum + a[k][m] * b[m][l];
                }
                c[k][l] = sum;
            }
        }
        for (int i = 0; i < v; i++)
        {
            for (int j = 0; j < w; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Sorry We cannot Multiply this arrays");
    }
    return 0;
}