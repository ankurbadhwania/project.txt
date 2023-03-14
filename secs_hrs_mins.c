#include<stdio.h>
int main(){
    int seconds,hours,mins;
    printf("enter seconds ");
    scanf("%d",&seconds);
    hours=seconds/3600;
    mins=(seconds%3600)/60;
    seconds=((seconds%3600)%60);
    printf("%d %d %d",hours,mins,seconds);
    return 0;
}