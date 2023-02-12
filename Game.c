#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int cash = 100;
void play(int bet)
{
    char a[3]={'J','Q','K'};
    printf("Suffling....\n");
    srand(time(NULL));
    for (int i=0;i<5;i++)
    {
        int x = rand() %3;
        int y = rand() %3;
        int temp;
        temp = a[x];
        a[x] = a[y];
        a[y] = temp;
    }
    // for(int j=0; j<31; j++)
    // {
    //     for (int i=0; i<3; i++)
    //     {
    //     a[i]=a[i]+a[i+1];
    //     a[i+1]=a[i]-a[i+1];
    //     a[i]=a[i]-a[i+1];
    //     }
    // }
    // printf("%c%c%c",a[0],a[1],a[2]);
    int playerguess;
    printf("What's the position of Queen 1,2 or 3 ? :");
    scanf("%d",&playerguess);
    printf("\nthe position of the cards : (%c %c %c)",a[0],a[1],a[2]); 
    if(a[playerguess - 1]=='Q')
    {
        cash+=3*bet;
        // printf("the position of the cards : (%c %c %c)",a[0],a[1],a[2]);
        printf("You won the %d amount",cash);
    }
    else
    {
        cash -=bet;
        printf("You lost the %d of %d", bet,cash);
    }
    
}
int main ()
{
    int i,bet;
    while(cash > 0)
    {
    printf("Enter your bet amount : ");
    scanf("%d",&bet);
    if(bet == 0 || bet > cash)
    {
     break;
    }
    play(bet);
    printf("\n*************************************************\n");
    }
    getchar();
    return 0;
}