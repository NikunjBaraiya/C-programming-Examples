#include <stdio.h>
void fun()
{
    int km;
    float miles = 0.621371;

    printf("Enter Kilometer : ");
    scanf("%d", &km);

    printf("%d kilometers = %f miles\n\n", km, km * miles);
}
void fun2()
{
    int inches;
    float foot = 0.0833333;

    printf("Enter Inches : ");
    scanf("%d", &inches);

    printf("%d Inches = %f Foot\n\n", inches, inches * foot);
}

void fun3()
{
    int cm;
    float inches = 0.393701;

    printf("Enter Centimetre : ");
    scanf("%d", &cm);

    printf("%d Centimeter  = %f Inches\n\n", cm, cm * inches);
}

void fun4()
{
    int pound;
    float kg = 0.453592;

    printf("Enter Pounds : ");
    scanf("%d", &pound);

    printf("%d Pounds  = %f Kilogram\n\n", pound, pound * kg);
}

void fun5()
{
    int inches;
    float metre = 0.0254;

    printf("Enter Inches : ");
    scanf("%d", &inches);

    printf("%d Inches  = %f Meter\n\n", inches, inches * metre);
}

int main()

{
    char input;

    for (int i = 0; i <= 10; i++)
    {
        printf("Press (a) for convert kilometers to miles\n" "Press (b) for convert Inches to foot\n" "Press (c) for convert Centimeter to inches\n" "Press (d) for convert Pound to Kgs\n" "Press (e) for convert Inches to meter\n" "Press (q) for Exit\n");
        printf("Enter a number : ");
        scanf("%c", &input);

        switch (input)
        {
        case 'a':
        {
            fun();
            break;
        }
        case 'b':
        {
            fun2();
            break;
        }
        case 'c':
        {
            fun3();
            break;
        }
        case 'd':
        {
            fun4();
            break;
        }
        case 'e':
        {
            fun5();
            break;
        }
        case 'q':
        {
            goto end;
        }

        default:
        {
            printf("Out of perameter\n");
            break;
        }
        }
    }
end:

    return 0;
}