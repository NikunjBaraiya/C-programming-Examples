// Use online compiler
// Basic Linked List program

#include<stdio.h>
#include<stdlib.h>
struct node {
    int a;
    struct node *ptr;
};
int main ()
{
    struct node *pointer = NULL;
    pointer = (struct node *)malloc(sizeof(struct node));
    pointer -> a = 30;
    pointer -> ptr = NULL;
    
    printf("%d\n",pointer -> a);
    free(pointer);
    printf("%d\n",pointer);
    printf("%p\n",pointer);
    pointer=NULL;
    printf("%d\n",pointer);
    printf("%p\n",pointer);
    return 0;
}

// second Example

#include<stdio.h>
#include<stdlib.h>
struct node {
    int a;
    struct node *ptr;
};
int main ()
{
    struct node *pointer = NULL;
    pointer = (struct node *)malloc(sizeof(struct node));
    pointer -> a = 30;
    pointer -> ptr = NULL;
    
    struct node *pointer2 = (struct node *)malloc(sizeof(struct node));
    pointer2 -> a = 40;
    pointer2 -> ptr = NULL;
    pointer -> ptr = pointer2;
    
    printf("%d\n",pointer -> a);
    printf("%d\n",pointer -> ptr);
    printf("%d\n",pointer2 -> a);
    printf("%d\n",pointer2 -> ptr);
    free(pointer);
    free(pointer2);
    pointer2=NULL;
    pointer=NULL;
    return 0;
}

//

#include<stdio.h>
#include<stdlib.h>
struct node {
    int a;
    struct node *ptr;
};
int main ()
{
    struct node *pointer = NULL;
    pointer = (struct node *)malloc(sizeof(struct node));
    pointer -> a = 30;
    pointer -> ptr = NULL;
    
    struct node *pointer2 = (struct node *)malloc(sizeof(struct node));
    pointer2 -> a = 40;
    pointer2 -> ptr = NULL;
    pointer -> ptr = pointer2;
    
    pointer2 = (struct node *)malloc(sizeof(struct node));
    pointer2 -> a = 50;
    pointer2 -> ptr = NULL;
    pointer -> ptr -> ptr = pointer2;
    
    
    
    printf("%d\n",pointer -> a);
    printf("%d\n",pointer -> ptr);
    printf("%d\n",pointer -> ptr -> a);
    printf("%d\n",pointer2 -> a);
    printf("%d\n",pointer2 -> ptr);
    free(pointer);
    free(pointer2);
    pointer2=NULL;
    pointer=NULL;
  return 0;
}

// count the number of nodes

#include<stdio.h>
#include<stdlib.h>
struct node {
    int a;
    struct node *ptr;
};

struct node count (struct node *point)
{
    int c = 0;
    if (point == NULL)
        printf("Your Linked List empty");
    struct node *point2 = NULL;
    point2 = point;
    while(point2 != NULL)
    {
        c++;
        point2 = point2 -> ptr;
    }

    // while(point2 != NULL)
    // {
    //     printf("%d\n",point2 -> a);
    //     point2 = point2 -> ptr;
    // }  this for print the value of the linked list

    printf("%d",c);
}
int main ()
{
    struct node *pointer = NULL;
    pointer = (struct node *)malloc(sizeof(struct node));
    pointer -> a = 30;
    pointer -> ptr = NULL;
    
    struct node *pointer2 = (struct node *)malloc(sizeof(struct node));
    pointer2 -> a = 40;
    pointer2 -> ptr = NULL;
    pointer -> ptr = pointer2;
    
    pointer2 = (struct node *)malloc(sizeof(struct node));
    pointer2 -> a = 50;
    pointer2 -> ptr = NULL;
    pointer -> ptr -> ptr = pointer2;
    
    count(pointer);
    
    
    free(pointer);
    free(pointer2);
    pointer2=NULL;
    pointer=NULL;
    return 0;
}

//

