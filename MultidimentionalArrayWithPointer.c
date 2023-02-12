#include<stdio.h>
int main ()
{
    int a[2][2][2]={{{1,2},{3,4}},{{5,6},{7,8}}};
    int (*p)[2][2]=a;
    for(int i=0; i<2;i++)
    {
        for(int j=0; j<2;j++)
        {
            for(int k=0; k<2; k++)
            {
                printf("%d",*(a[i][j])+k);
                // printf("%d",*(*(a[i]+j)+k));
                // printf("%d ",*(*(*(a+i)+j)+k));
            }
            printf("  ");
        }
        printf("\n");
    }
    printf("%d %d",p,*p);
    // for(int i=0; i<2;i++)
    // {
    //     for(int j=0; j<2;j++)
    //     {
    //         for(int k=0; k<2; k++)
    //         {
    //             printf("%d",(a[i][j])+k);
    //             // printf("%d",(*(a[i]+j)+k));
    //             // printf("%d ",(*(*(a+i)+j)+k));
    //         }
    //         printf("  ");
    //     }
    //     printf("\n");
    // }
    // for(int i=0; i<2;i++)
    // {
    //     for(int j=0; j<2;j++)
    //     {
    //         for(int k=0; k<2; k++)
    //         {
    //             printf("%d ",(a[i][j])+k);
    //             // printf("%d",(*(a[i]+j)+k));
    //             // printf("%d ",(*(*(a+i)+j)+k));
    //         }
    //         printf("  ");
    //     }
    //     printf("\n");
    // }
    return 0;
}