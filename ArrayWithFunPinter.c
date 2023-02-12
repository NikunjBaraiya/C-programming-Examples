// array,function pointer,pointer example
#include<stdio.h>
int* fun(int (*p)[2][2])
{
    // int *(q)[2][2]=p;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                printf("%d\n",&p[i][j][k]);
            }
            
        }
        
    }
    
}
int main ()
{
    int a,b,c;
    printf("Enter the array [num 1][num 2][num 3] : \n");
    scanf("%d%d%d",&a,&b,&c);
    // printf("%d %d %d",a,b,c);
    int array[a][b][c];
    printf("Enter the values : \n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                scanf("%d",&array[i][j][k]);
            }
            
        }
        
    }
    fun(&array);
    // fun(&array[a],b,c);
    int (*p)[b][c]=array;
    
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            for (int k = 0; k < c; k++)
            {
                printf("%d\n",*(*(p[i]+j)+k));
                // printf("%d\n",(p[i][j]+k));
            }
            
        }
        
    }
    // for(int i=0;i<a; i++)
    // {
    // // printf("%d\n",*array+i);
    // printf("%d\n",array+i);
    // }
    
    return 0;
}