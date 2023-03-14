#include<stdio.h>
int main(){
   int n,a;
   printf("enter a no.");
   scanf("%d",&n);
   int sum_odd=0;
   int sum_even=0;
  while(n!=0){
    a=n%10;
    n=n/10;
    if (a%2==0){
        sum_even+=a;
    }
    else if(a%2!=0){
        sum_odd+=a; 
    }
    }
    printf("sum of even no. is: %d\n sum of odd no. is: %d",sum_even,sum_odd);
    return 0;
  
   }

