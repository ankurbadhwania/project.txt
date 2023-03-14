#include<stdio.h>
float circlearea(float r);
int main(){
    float r;
    printf("enter radius: ");
    scanf("%f",&r);
    printf("%f",circlearea(r));
    return 0;
}
float circlearea(float r){
    return 3.14*r*r;
}