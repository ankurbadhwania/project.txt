#include<stdio.h>
void table(int n);
int main(){
    int n;
    printf("enter a number :");
    scanf("%d",&n);
      table(n);   // here n is argument/actual parameter
     return 0;
}
void table(int n){    // here n is parameter/formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}