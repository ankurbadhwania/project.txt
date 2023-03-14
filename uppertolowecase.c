#include<stdio.h>
int main(){
    char ch;
    int upper;
    printf("enter a character");
    scanf("%c",&ch);
    upper=ch;
    upper=ch+32;
    printf("lowercase is %c", upper);
    return 0;
}