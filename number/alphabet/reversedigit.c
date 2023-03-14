#include<stdio.h>
int main(){
   int n,b;
   b=0;
   printf("enter a no.");
   scanf("%d",&n);
   while(n!=0){
    b=b*10+n%10;
    n=n/10;
   }
printf("%d",b);
  return 0;
}