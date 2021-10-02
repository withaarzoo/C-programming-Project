/*

c program for unit conversion
code by : Aarzoo
date : 23/07/2020

*/
#include <stdio.h>
int main()
{
    int a, b, c, e, f, g,h;
    float d;
    printf("press 1 for start this system : ");
    scanf("%d", &b);
    printf("\n");
    printf("---- Wellcome ----\n" );
    printf("\n");

    while (b == 1)
    {

        printf("press 1 if you want to convert km to mile\nPress 2 if you want to convert inch to feet\nPress 3 if you want to convert cm to inch\nPress 4 if you want to convert pount to kg\nPress 5 if you want to convert inch to meter\nPress 6 if you want to convert celsius to fahrenheit\n\n");
        scanf("%d", &a);
        printf("\n");

        if (a == 1)
        {
            printf("enter your km value : ");
            scanf("%d", &c);

            printf("%d km = %.2f mile\n\n", c, c / 1.609344);
        }
        else if (a == 2)
        {
            printf("enter your inch value : ");
            scanf("%f", &d);

            float feet = d / 12;
            printf("%f inch = %f feet\n\n", d, feet );
        }
        else if (a == 3)
        {
            printf("enter your cm value : ");
            scanf("%d", &e);

            printf("%d cm = %.2f inch\n\n", e, e / 2.54);
        }
        else if (a == 4)
        {
            printf("enter your pound value : ");
            scanf("%d", &f);

            printf("%d pound = %.2f kg\n\n", f, f * 0.45359237);
        }
        else if (a == 5)
        {
            printf("enter your inch value : ");
            scanf("%d", &g);

            printf("%d inch = %.2f meter\n\n", g, g * 0.025);
        }
        else if (a==6)
        {
            printf("enter your celsius value : ");
            scanf("%d", &h);

            printf("%d celsius = %d fahrenheit\n\n", h, (h*9/5)+32);
        }
        

        else
        {
            printf("please check your input value\n\n");
        }
    }
}
