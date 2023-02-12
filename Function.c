/* Without arguments and without return value */
 #include <stdio.h>
#include<string.h>
void user()
{
    char a[100],c[10];
    int b;

    for (int i = 0; i <=10; i++)
    {
        printf("%s","Enter user name : ");
        scanf("%s", &a);
        printf("Enter user age : ");
        scanf("%d", &b);
        printf("Your answer should be Yes or No\n");
        printf("Do you have licence : ");
        scanf("%s", &c);

        {
            if (b >= 18)
            {
                if (strcmp(c, "Yes")==0)
                {
                    printf("You can deive\n");
                }
                else
                {
                    printf("You cannot drive\n");
                }

            }
            else
            {
                printf("You are not eligible for Drive\n");
            }
            
        }
    }
       
}

int main ()
{
    user ();

    return 0;
}

/* Without arguments and with return value */

#include<stdio.h>
int user()
{
    int i;
    printf("Enter a number : ");
    scanf("%d", &i);

    return i;
}

int main()
{
    int i;

    i=user();
    printf("Your number is : %d\n", i);

    return 0;
}

/* With arguments and without return value */

#include <stdio.h>

void user(int j)
{
    for(int i=0; i<=j; i++)
    {
        printf("%c\n", '*');
    }
}
int main ()
{
    user(10);
    return 0;
}

/* With arguments and without return value */

#include <stdio.h>

int user(int a, int b)
{
    return a*b;  
}

int main ()
{
    int a,b,c;
    printf("Enter a number : ");
    scanf("%d", &a);
    printf("Enter a number : ");
    scanf("%d", &b);

    c= user(a, b);
    printf("Your sum is %d", c);

    return 0;
}