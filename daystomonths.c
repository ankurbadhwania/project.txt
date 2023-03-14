#include<stdio.h>
int main(){
    int a,months,week,mon,days;
    printf("enter no. of days");
    scanf("%d",&a);
months=a/30;
days=a%30;
week=days/7;
printf("months:%d weeks:%d days:%d", months,week,days);

    return 0;
}