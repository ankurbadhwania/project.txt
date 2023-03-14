#include<stdio.h>
int main(){
    float a,b,c,D;
    printf("enter a,b,c in form ax^2+bx+c=0 : ");
    scanf("%f %f %f",&a,&b,&c);
    D=b*b-(4*a*c);
    float root1=((-b)+pow(D,0.5))/(2*a);
    float root2=(-b-pow(D,0.5))/(2*a);
    if(D<0){
        printf("imaginary roots");
    }
    else if(D>=0){
        printf("roots of the equation are: %.1f and  %.1f",root1,root2);
    }
    return 0;
}                         