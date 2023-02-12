// Online C++ compiler to run C++ program online
#include <stdio.h>


int main() {
    int m,n,x,y;
    printf("enter the dimension of array1");
    scanf("%d %d",&m,&n);

    printf("enter the dimension of array2");
    scanf("%d %d",&x,&y);
    int arr[m][n];
    int arr2[x][y];
    int arr3[m][x];
    int sum;
    if(n==x){
    printf("enter the elements of array1");
      for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

        scanf("%d",&arr[i][j]);


        }

    }

    printf("enter the elements of array2");
     for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {

        scanf("%d",&arr2[i][j]);


        }

    }



    for(int i=0;i<m;i++)
    {
        for(int j=0;j<y;j++)
        {
            sum=0;
            for(int k=0;k<n;k++)
            {


            sum=sum+arr[i][k]*arr2[k][j];
            }

            arr3[i][j]=sum;
        }


    }
    printf("multiplied matrix\n");
      for(int i=0;i<m;i++)
    {
        for(int j=0;j<y;j++)
        {



            printf("%d\t",arr3[i][j]);
        }
        printf("\n");

    }
    }
    else
    {

    printf("matrix can't be multiply");
    }
    return 0;
}
