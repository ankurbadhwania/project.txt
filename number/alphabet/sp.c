#include<stdio.h>
int main(){
    char ch;
    printf("enter a character ");
    scanf("%c",&ch);
 if (ch>='a'&&ch<='z'|| ch>='A'&&ch<='Z'){
    printf("alphabet");
 }else if(ch>='0' && ch<='9'){
    printf("number");
  
 }
 else{
  printf("special ch ");
 }
    return 0;
}