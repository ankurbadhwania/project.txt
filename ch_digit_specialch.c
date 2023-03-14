# include<stdio.h>

int main(){
char ch;
printf("enter the character");
scanf("%c",&ch);
if((ch>='A' && ch<='Z') || ((ch >= 'a' )&& (ch <= 'z'))){
    printf("character");
}
else if((ch>='0') && (ch<='9')){
    printf("digit");
}
else{
    printf("special character");
}
return 0;

}