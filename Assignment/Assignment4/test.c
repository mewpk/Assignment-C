#include<stdio.h>
#include<math.h>
int main(){
    double x,pi,rad;
    pi = 3.14;
    scanf("%lf",&rad);
    x = cos(rad*pi/180);
    printf("%.2f",x);
}