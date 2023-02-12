// #include <stdio.h>

// int main ()

// {
//     int i,j;

//     printf("Enter the integer : ");
//     scanf("%d %d", &i, &j);

//     printf("integer number : \t%d\t    %d\t\n", i,j);
//     printf("Address of pointer : %p\t %p\t", &i,&j);

//     return 0;
// }.

// pointer and allocation of pointer

// #include<stdio.h>
// int main ()
// {
//     int a=5,*p;//here (a) is normal int variable and (*p) is pointer variable (which stores the adress of address of the variable) 
//     p=&a;  //pointer (p) store the address of (a)
//     printf("%d\n",a);//print the value of the (a)
//     printf("%u\n",&a);//print the address of the (a)
//     printf("%u\n",p);//print the address of the (a)
//     printf("%u\n",&p);//print the address of the (p)
//     printf("%u\n",*p);//print the value of the (a)
//     printf("%u\n",*&p);//print the address of the (a), p means (&a), &p means pointer address, *&p means  adress of (a)
//     return 0;
// }

// base adress

// #include<stdio.h>
// int main ()
// {
//     int a=5,*p;
//     float b=5.5, *q;
//     char c='a', *r;
//     double d=5.5,*s;

//     p=&a;
//     q=&b;
//     r=&c;
//     s=&d;

//     printf("%u\n",&a);
//     printf("%u\n",&b);
//     printf("%u\n",&c);
//     printf("%u\n",&d);
//     printf("%u\n",&p);
//     printf("%u\n",&q);
//     printf("%u\n",&r);
//     printf("%u\n",&s);
//     return 0;
// }

// Extended concept of pointers

// #include<stdio.h>
// int main ()
// {
//     int a=5,*p,**q,***r;//*p store the address of (a),**q store the address of (*p),***r store the address of (**q)
//     p=&a;               // we cannot store the address of (a) in (**q), or adress of (*p) in (***r)
//     q=&p;               // adress points fllows the sequence we cannot vari.
//     r=&q;

//     printf("%u\n",&a);
//     printf("%u\n",&p);
//     printf("%u\n",&q);
//     printf("%u\n\n",&r);
//     printf("%u\n",p);
//     printf("%u\n",q);
//     printf("%u\n",r);
//     **q=7;
//     printf("%d",**q);
//     return 0;
// }

// change the value of variable a whith help of pointer and extended concept of pointer

// #include <stdio.h>
// int main ()
// {
//     int a=5,*p,**q,***r;
//     p=&a;
//     q=&p;
//     r=&q;
//     ***r=10;
//     printf("%d",*p);
//     return 0;
// }