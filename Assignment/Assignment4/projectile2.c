#include <stdio.h>
#include <math.h>

int main()
{
    double u, v, s, x, t, g, pi, degree, rad, answer, Hgoal, Tgoal, sx; // u = ความเร็วเริ่มต้น v = ความเร็ว s = ความสูงวัดจากพื้น x = ระยะทาง t = เวลา
    g = -9.81;                                                          // m/sec^2
    pi = 3.14159265;
    char ch;
    do
    {
        printf("Input Speed (m/s) : ");
        scanf("%lf", &u);
        printf("input Degree :");
        scanf("%lf", &rad);
        printf("input Distance (m) : ");
        scanf("%lf", &x);
        degree = (rad * pi) / 180;
        Tgoal = x / (u * cos(degree));
        if (Tgoal > 0.5)
        {
            t = (2 * u * sin(degree)) / (-1 * g);
            s = u * cos(degree) * t;

            if (s < x)
            {
                answer = x - s;
                printf("---------------------\n");
                printf("TOT Fail ball\n");
                printf("Ball far from goal : %g\n", answer);
                printf("Times used : %g\n", t);
            }
            else
            {   
                Hgoal = (u * sin(degree) * Tgoal) + (0.5 *g* (Tgoal * Tgoal));
                printf("---------------------\n");
                printf("TOT Save ball!!\n");
                printf("Ball far from ground : %g\n", Hgoal);
                printf("Times used : %g\n", Tgoal);
            }
        }
        else
        {   
            t = (2 * u * sin(degree)) / (-1 * g);
            sx = t * (u * cos(degree));
            if (sx > x)
            {
                Hgoal = (u * sin(degree) * Tgoal) + (0.5 *g* (Tgoal * Tgoal));
                if (Hgoal > 2.44)
                {
                    printf("---------------------\n");
                    printf("TOT Overshoot\n");
                    printf("Ball far from ground : %g\n", Hgoal);
                    printf("Times used : %g\n", Tgoal);
                }
                else
                {   
                    printf("---------------------\n");
                    printf("Ball far from ground : %g\n", Hgoal);
                    printf("Times used : %g\n", Tgoal);
                    printf("Goal! \\^0^/\n");
                }
            }
        }
        do
        {

            printf("\nEnter y to Calculator again or n to exit. :");
            scanf(" %c", &ch);

        } while (ch != 'y' && ch != 'n');
    } while (ch != 'n');
    printf("\nEnd Program\n");
    return 0;
}