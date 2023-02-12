#include<stdio.h>

int main ()

{
    int i;
    float j;
    char k;
    double l;
    long m;
    unsigned char n;
    short o;
    long double p;


    printf("Size Of int = %lu Bytes\n", sizeof (i));
    printf("Size Of Float = %lu Bytes\n", sizeof (j));
    printf("Size Of Char = %lu Bytes\n", sizeof (k));
    printf("Size Of Double = %lu Bytes\n", sizeof (l));
    printf("Size Of Long = %lu Bytes\n", sizeof (m));
    printf("Size Of Unsigned Char = %lu Bytes\n", sizeof (n));
    printf("Size Of Short = %lu Bytes\n", sizeof (o));
    printf("Size Of Long Double = %lu Bytes\n", sizeof (p));
    

    return 0;
}