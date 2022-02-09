#include <stdio.h>
int main()
{
    int test = 0; //จองตัวแปรเป็นจํานวนเต็ม int
    char ch;
    do
    {
        printf("\nAssignment 1.1 Program Test specific format of variable\n");
        printf("Enter value of test : ");
        scanf("%d", &test); //ทดลองอ่านด ้วยตัวควบคุม %d ต ้องมี & หน้าตัวแปรด้วย
        printf("print format of test\n");
        printf("int %%d= %d\n", test);
        printf("float %%f = %f\ndouble %%lf = %lf\n", test, test);
        printf("exponent %%e = %e\nsignificant %%g = %g\n", test, test);
        printf("character %%c = %c\n",test,test);
        printf("Enter y to run again or n to exit.");
        scanf(" %c", &ch);
    } while (ch == 'y');
    printf("End Program\n");
    return 0;
}