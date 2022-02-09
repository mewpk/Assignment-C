#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int fibonacci(int n)
{
    int answer;
    double phi;
    phi = 1.618034;
    answer = ((pow(phi,n)-pow(1-phi,n))/sqrt(5));
    return answer;
}
int nCr(int n, int r)
{
    int answer;
    answer = tgamma(n+1)/(tgamma(r+1)*tgamma((n+1)-r));

    return answer;
}
int GCD(int x, int y)
{
    int answer;
    
    while(x!=y)
    {
        if(x > y)
            x -= y;
        else
            y -= x;
    }
    answer = x;
    return answer;
}
int random(){
    int answer;
    srand(time(NULL));
    answer = rand() % 100 + 1;
    return answer;
}
int get_int(int min, int max)
{
    int num;
    do
    {   
        printf("Please input only %d to %d :",min,max);
        scanf(" %d", &num);
        while( getchar() != '\n' );
    } while (num >= max+1 | num <= min-1);
    return num;
}
int get_menu()
{

    int select;
    system("cls");
    printf(" ***********************************************\n");
    printf(" * My Test function *\n");
    printf(" ***********************************************\n");
    printf(" * 1. Fibonacci function *\n");
    printf(" * 2. Combination number *\n");
    printf(" * 3. Find GCD(x,y) *\n");
    printf(" * 4. Random Guess Number *\n");
    printf(" * 0. exit *\n");
    printf(" ***********************************************\n");
    printf(" Enter menu number \n");
    select = get_int(0, 4);
    return select;
}
int main()
{
    int x,y, n, r, answer,select;
    do
    {   
        system("cls");
        select = get_menu();
        if (select == 1)    
        {   
            system("cls");
            printf(" ***********************************************\n");
            printf("Calculate fibonacci number\n"); 
            printf(" ***********************************************\n");
            printf("Enter fibonacci term f(n) = (0-45) \n"); 
            n = get_int(0, 45);
            answer = fibonacci(n);
            printf("fibonacci term f(%d) = %d\n",n,answer);
            while( getchar() != '\n' );                          
        }
        else if (select == 2)  {
            system("cls");
            printf(" ***********************************************\n");
            printf("Calculate Combinations number\n"); 
            printf(" ***********************************************\n");
            printf("Enter Combinations nCr  \n"); 
            printf("Enter  n  \n"); 
            n = get_int(0, 100);
            printf("Enter  r \n"); 
            r = get_int(0, 100);
            answer = nCr(n,r);
            printf("fibonacci term (%d)C(%d) = %d\n",n,r,answer);
            while( getchar() != '\n' );  
        }
        else if (select == 3)
        {
            system("cls");
            printf(" ***********************************************\n");
            printf("Calculate Greatest Common Divisor(GCD) \n"); 
            printf(" ***********************************************\n");
            printf("Enter GCD(x,y)  \n"); 
            printf("Enter  x \n"); 
            x = get_int(-100, 100);
            printf("Enter  y \n"); 
            y = get_int(-100, 100);
            answer = GCD(x,y);
            printf(" GCD(%d,%d) = %d\n",x,y,answer);
            while( getchar() != '\n' ); 
        }
        else if (select == 4)
        {
            system("cls");
            printf(" ***********************************************\n");
            printf(" Random Guess Number \n"); 
            printf(" ***********************************************\n");
            printf("Enter GCD(x,y)  \n"); 
            answer = random();
            printf(" Random Guess Number = %d\n",answer);
            while( getchar() != '\n' ); 
        }
        
    } while (select != 0);
    system("cls");
    printf("Exit");
    return 0;
}