#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{

    double x, y, count;
    char name[30], ch;
    count = 0;
    srand(time(NULL));
    x = rand() % 100 + 1;
    printf("Enter you name : ");
    scanf(" %s", name);
    printf("Hello %s \n", name);
    do
    {   
        count++;
        printf("What is number 1-100 do you want to try :");
        scanf("%lf", &y);
        printf("\nThis is your number : %.0f\n", y);
        if (x == y)
        {
            printf("You correct !!\n");
            printf("This is your count : %g\n", count);
            printf("Answer is %g\n", x);
            count = 7;
        }
        else
        {
            if (count != 7)
            {
                printf("You WRONG !!\n");
                if (y > x)
                {
                    printf("Your number is higher than answer\n");
                }
                else if (y < x)
                {
                    printf("Your number is lowwer than answer\n");
                }
                else
                {
                    continue;
                }
                printf("This is your count : %g\n", count);
                printf("----------------------------------\n");
            }
            else
            {
                count = 7;
            }
        }
        if (count == 7 && x != y)
        {
            printf("Answer is %g\n", x);
            printf("You Lose this game !!\n");
            count = 0;
            x = rand() % 100 + 1;
            do
            {
                while( getchar() != '\n' );
                printf("Enter y to play again or n to exit. :");
                scanf(" %c", &ch);
            } while (ch != 'y' && ch != 'n'); 
        }
    } while (ch != 'n');
    printf("\nEnd Program\n");
    return 0;
}