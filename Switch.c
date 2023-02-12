#include<stdio.h>
int main()
{
    int subject, marks;

    printf("Enter Your subjects : ");
    scanf("%d", &subject);



    switch (subject)
    {
    case 1:
        printf("You Entered Maths\n");
        {
            printf("Enter your Marks : ");
            scanf("%d", &marks);
        } 
        switch (marks)
        {
        case 50:
            printf("You have pass in this subject");
            break;
        case 70:
            printf("You are in top 10 in this subject");
            break;
        case 90:
            printf("You are in top 5 in this subject");
            break;
        
        default:
            printf("You are fail in this subject");
            break;
        }
        break;
    case 2:
        printf("You Entered Science\n");
        {
            printf("Enter your Marks : ");
            scanf("%d", &marks);
        }
        switch (marks)
        {
        case 50:
            printf("You have pass in this subject");
            break;
        case 70:
            printf("You are in top 10 in this subject");
            break;
        case 90:
            printf("You are in top 5 in this subject");
            break;
        
        default:
            printf("You are fail in this subject");
            break;
        }
        break;
    case 3:
        printf("You Entered Gujarati\n");
        {
            printf("Enter your Marks : ");
            scanf("%d", &marks);
        }
        switch (marks)
        {
        case 50:
            printf("You have pass in this subject");
            break;
        case 70:
            printf("You are in top 10 in this subject");
            break;
        case 90:
            printf("You are in top 5 in this subject");
            break;
        
        default:
            printf("You are fail in this subject");
            break;
        }
        break;
    case 4:
        printf("You Entered Hindi\n");
        {
            printf("Enter your Marks : ");
            scanf("%d", &marks);
        }
        switch (marks)
        {
        case 50:
            printf("You have pass in this subject");
            break;
        case 70:
            printf("You are in top 10 in this subject");
            break;
        case 90:
            printf("You are in top 5 in this subject");
            break;
        
        default:
            printf("You are fail in this subject");
            break;
        }
        break;
    case 5:
        printf("You Entered Sanskrit\n");
        {
            printf("Enter your Marks : ");
            scanf("%d", &marks);
        }
        switch (marks)
        {
        case 50:
            printf("You have pass in this subject");
            break;
        case 70:
            printf("You are in top 10 in this subject");
            break;
        case 90:
            printf("You are in top 5 in this subject");
            break;
        
        default:
            printf("You are fail in this subject");
            break;
        }
        break;
    case 6:
        printf("You Entered Computer\n");
        {
            printf("Enter your Marks : ");
            scanf("%d", &marks);
        }
        switch (marks)
        {
        case 50:
            printf("You have pass in this subject");
            break;
        case 70:
            printf("You are in top 10 in this subject");
            break;
        case 90:
            printf("You are in top 5 in this subject");
            break;
        
        default:
            printf("You are fail in this subject");
            break;
        }
        break;
    
    default:
        printf("You are failed in all subjects");
        break;
    }
    return 0;

}