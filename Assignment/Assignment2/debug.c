#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d;
    double x, x1, x2, Re, Im;
    char ch;
    do
    {
        a = b = c = 0;
        printf("\nProgram calculate root of Equation ax^2+bx+c = 0\n");
        printf("Enter parameter a : ");
        scanf("%lf", &a);
        printf("Enter parameter b : ");
        scanf("%lf", &b);
        printf("Enter parameter c : ");
        scanf("%lf", &c);
        if (a == 0)
        {
            if (b != 0)
            {
                x = -c / b;
                printf("This is linear equation\n");
                printf("Answer of %g x %+g = 0 is\n", b, c);
                printf("x = %g\n",x);
            }
            else
            {
                printf("Error! invalid equation\n");
            }
        }
        else
        {
            if ((b*b) - (4 * a * c) >= 0)
            {
                x1 = (-b + sqrt((b*b)-(4*a*c))) / (2 * a);
                x2 = (-b - sqrt((b*b)-(4*a*c))) / (2 * a);
                printf("root of %gx^2 %+gx %+g = 0 is\n", a, b, c);
                printf("x1 = %g\nx2 = %g\n", x1, x2);
            }
            else
            {
                Re = -b / (2 * a);
                Im = sqrt(fabs((b * b) - (4 * a * c))) / (2 * a);
                printf("root of %gx^2 %+gx %+g = 0 is complex number\n",a, b,c);
                printf("x1 = %g + %gi\n", Re, Im);
                printf("x2 = %g - %gi\n", Re, Im);
                printf("i is square root of -1\n");
            }
        }

        do
        {
            printf("Enter y to calculate again or n to exit.");
            scanf("%c", &ch);
        } while (ch != 'y' && ch != 'n');
    } while (ch == 'y');
    printf("\nEnd Program\n");
    return 0;
}
