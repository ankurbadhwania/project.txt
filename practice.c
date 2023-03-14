// #include<stdio.h>
// int main(){
    // int year;
    // printf("enter the year: ");
    // scanf("%d",&year);
    // if(year%100==0){
    //     if(year%400==0){
    //         printf("%d","is a leap year");
    //     }
    //     else{
    //         printf("%d","is not a leap year" );
    //     }}
    // else if(year%4==0){
    //     printf("%d","is a leap year");
    //     }
    //   else{
    //     printf("%d","not a leap year");
    // }
    // extern int principal;
    // extern float rate;
    // extern int time;
    // extern float interest;
    // interest = principal*rate*time/100;
    // printf("interest=%.2f",interest);
    // return 0;
// }
#include<stdio.h>
int main(){
    int year;
    printf("enter the year: ");
    scanf("%d",&year);
    if(year%100==0){
        if(year%400==0){
            printf("%d is a leap year",year);
        }
        else{
            printf("%d is not a leap year",year);
        }}
    else if(year%4==0){
        printf("%d is a leap year",year);
        }
      else{
        printf("%d not a leap year",year);
    }
    return 0;
}
