#include <stdio.h>

int main()

{
    int i,j=0;

    printf("Enter the Natural Number : ");
    scanf("%d", &i);

    do
    {
        j +=1;
        printf("%d X %d = %d\n", i,j,i*j);
        
    } while (j<10);
    
    return 0;
    
}