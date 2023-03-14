#include<stdio.h>
int main(){
    int amount;
    printf("enter amount: ");
    scanf("%d",&amount);
    int notes2000=amount/2000;
    int notes500=(amount-(2000*notes2000))/500;
    int notes200=(amount-(2000*notes2000)-(500*notes500))/200;
    int notes100=(amount-(2000*notes2000)-(500*notes500)-(200*notes200))/100;
printf("numer of 2000 notes are: %d \n no. of 500 note: %d \n no.of 200 notes : %d \n notes 100 : %d",notes2000,notes500,notes200,notes100);
    return 0;
}