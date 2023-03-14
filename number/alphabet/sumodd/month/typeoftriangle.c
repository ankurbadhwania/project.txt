#include<stdio.h>
int main(){
     int angle1,angle2,angle3;
    printf("angle 1 of triangle in degrees: ");
    scanf("%d",&angle1);
     printf("angle 2 of triangle in degrees: ");
     scanf("%d",&angle2);
      printf("angle 3 of triangle in degrees: ");
      scanf("%d",&angle3);
      if(angle1==0||angle2==0||angle3==0){
        printf("invalid");
      }
      else if((angle1+angle2+angle3)!=180){
        printf("invalid");
      } 
      else if(((angle1+angle2+angle3)==180) && (angle1==angle2 && angle1==angle3)){
        printf("equilateral triangle");
      }
      else if(angle1!=angle2 && angle1!=angle3 && angle2!=angle3){
        printf("scalene triangle");
      }
      else{
        printf("isosceles");
      }
      
    return 0;

}