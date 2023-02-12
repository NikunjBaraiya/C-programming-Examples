// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int top=-1;
int arr[5];
int item;

    void push(void)
   {


   if(top==4)
   {
       printf("stack overflow\n");
   }
   else
   {
       printf("enter the element\n");
       scanf("%d",&item);
       top++;
       arr[top]=item;
       printf("element pushed\n");
   }
   }
      void pop()
   {
        if(top==-1)
   {
       printf("stack underflow\n");
   }
   else
   {

       top--;
       printf("element popped\n");
   }
   }

  void show()
   {
       if(top==-1)
       {
           printf("stack is empty\n");
       }
       else{
       for(int i=top;i>=0;i--)
       {
           printf("%d\n",arr[top]);
       }}
   }
int main() {
while(1)
{


   int ch;
   printf("enter your choice\n");
   printf("push-1\n");
   printf("pop-2\n");
   printf("show-3\n");
   scanf("%d",&ch);

   switch(ch)
   {
       case 1: push();
        break;
        case 2: pop();
        break;
        case 3: show();
        break;
         default:printf("invailid option\n");

   }

}
    return 0;
}
