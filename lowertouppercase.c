#include<stdio.h>
int main(){
char ch,answer;
int upper;

printf("enter any character ");
scanf("%c",&ch);
upper=ch;
answer=upper-32;
printf("upper case is %c",answer);


    return 0;
}