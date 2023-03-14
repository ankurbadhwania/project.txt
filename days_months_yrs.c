#include<stdio.h>
int main(){
    // char ch;
    // printf("enter ch: ");
    // scanf("%c",&ch);
    // printf("%d",ch);
    int days,years,months;
    printf("enter days: ");
    scanf("%d",&days);
    years=days/365;
    months=(days%365)/30;
    days=(days%365)%30;
    printf("%d %d %d",years,months,days);
    return 0;
}