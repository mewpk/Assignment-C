#include <stdio.h>
#include <math.h>
int main(){
    int answer,x,y;
    printf("input x :");
    scanf("%d",&x);
    printf("input y :");
    scanf("%d",&y);
    answer = tgamma(x+1);
    printf("%d",answer);
}