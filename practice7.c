// #include<stdio.h>
// int user(int n) {
//   int j, flag = 1;

//   for (j = 2; j <= n / 2; ++j) {

//     if (n % j == 0) {
//       flag = 0;
//       break;
//     }
//   }

//   return flag;
// }
// int main()

// {
//     int a,flag=1;

//     printf("Enter the two integer number : ");
//     scanf("%d", &a);

//     // if(a>b)
//     // {
//     //     a=a+b;
//     //     b=a-b;
//     //     a=a-b;

//     //     printf("Your ")
//     // }
//     for (int i = 2; i <= a/2; ++i)
//     {
//         flag = user(i);

//         if (flag ==1)
//         {
//             printf("%d",i);
//         }
        
//     }
    
// return 0;
// }

// #include <stdio.h>
// int checkPrimeNumber(int n) {
//   int j, flag = 1;

//   for (j = 2; j <= n / 2; ++j) {

//     if (n % j == 0) {
//       flag = 0;
//       break;
//     }
//   }

//   return flag;
// }
// int main() {

//   int n1, n2, i, flag;

//   printf("Enter two positive integers: ");
//   scanf("%d %d", &n1, &n2);

//   // swap n1 and n2 if n1 > n2
//     if (n1 > n2) {
//     n1 = n1 + n2;
//     n2 = n1 - n2;
//     n1 = n1 - n2;
//   }

//   printf("Prime numbers between %d and %d are: ", n1, n2);
//   for (i = n1 + 1; i < n2; i++) {

//     // flag will be equal to 1 if i is prime
//     flag = checkPrimeNumber(i);

//     if (flag == 1) {
//       printf("%d ", i);
//     }
//   }
  
//   return 0;
// }

// user-defined function to check prime number

#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number : ");
    scanf("%d", &a);

    for (int j = 2; j < a/2; j++)
    {
        if (a%j >= 1)
        {
            printf("This number is a prime number");
            break;
        }
        // else
        // {
        //     printf("This isn't a prime number");
        //     break;
        // }
        
        
    }
    return 0;
    
}

