#include<stdio.h>
#include <math.h>
int main(){
   int n;
   printf("enter a year ");
   scanf("%d",&n);
   if(n%100==0){
    if(n%400==0){
    printf("leap year");}
    else{
        printf("not");
    }
   }
   else if(n%4==0){
    printf("leap year");
   }
   else{
    printf("not");
   }
    return 0;
}
