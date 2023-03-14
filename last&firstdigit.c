#include<stdio.h>
int main(){
    int n;
    int first;
    // n=89;
    // int a;
    // a=n%10;
    // printf("%d",a);
    // //for first digit
    scanf("%d",&n);
    first = n;
    while(first>=10){
        first = first/10;
        
    }
    printf("%d",first);
    
    return 0;

}