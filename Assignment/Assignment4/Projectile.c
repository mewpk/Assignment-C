#include <stdio.h>
#include <math.h>

int main()
{
    double u, v, s, x, t, g, pi, degree, rad, answer,Hgoal,Tgoal; // u = ความเร็วเริ่มต้น v = ความเร็ว s = ความสูงวัดจากพื้น x = ระยะทาง t = เวลา
    g = -9.81;                                         // m/sec^2
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
        Tgoal = x/(u*cos(degree));
        printf("%g\n",Tgoal);
        Hgoal = (u*sin(degree)*Tgoal)+((1/2*g)*(Tgoal*Tgoal));
        printf("%g\n",Hgoal);
        
        
        if (Hgoal < 0)
        {
            t = (2 * u * sin(degree)) / g;
            s = u * cos(degree) * t;
            answer = x-s;
            printf("---------------------\n");
            printf("TOT Fail ball\n");
            printf("Ball far from goal : %g\n",answer);
            printf("Times used : %g\n",t);
        }
        else if (Hgoal >= 2.44)
        {   
            printf("---------------------\n");
            printf("TOT Overshoot\n");
            printf("Times used : %g\n",t);
        }
        else if (Tgoal >= 0.5)
        {
            printf("TOT Save ball!!\n");
        }
        else
        {
            printf("Goal! \\^0^/\n");
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