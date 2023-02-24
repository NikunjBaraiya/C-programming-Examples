// Linear serching and binary searching
#include<stdio.h>
int linearsearch(int a[],int b, int c)
{
    for(int i=0; i<=b; i++)
    {
        if(a[i]==c)
        {
            printf("the element %d is located in a[%d]",c,i);
            break;
        }
    }
}
int binarysearch(int a[],int b, int c)
{
    for(int i=0; i<=b; i++)
    {
        for(int j=0; j<b; j++)
        {
        if(a[i]<a[j])
        {
            a[i]=a[i]+a[j];
            a[j]=a[i]-a[j];
            a[i]=a[i]-a[j];
        }
        }
    }
    int low, mid, high;
    low=0;
    high=b;
    while(low<=high)
    {
    mid = (low+high)/2;
    
    if(a[mid] == c)
        printf("the element %d is located in a[%d]",c,mid);
    if(a[mid]>c)
        high=mid-1;
    else
        low=mid+1;
    }
}
int main ()
{
    int x,y,z;
    printf("Enter the length of array : ");
    scanf("%d",&x);
    int a[x];
    y=(sizeof(a)/sizeof(int))-1;
    printf("Enter the array elements : \n");
    for(int i=0; i <= y; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to find : ");
    scanf("%d",&z);
    linearsearch(a,y,z);
    binarysearch(a,y,z);
    return 0;
}