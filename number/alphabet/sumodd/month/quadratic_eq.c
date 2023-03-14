#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c,x1,x2;
    printf("Quadratic Equation : ax^2 + bx +c = 0\n");
    printf("Enter value of a,b and c ( space separated ) : ");
    scanf("%f %f %f",&a,&b,&c);
    float D = (b*b)-(4*a*c);
    x1 = ((-b)+pow(D,0.5))/(2*a);
    x2 = ((-b)-pow(D,0.5))/(2*a);
    if (D<0) printf("No Roots");
    else printf("Roots = %.1f,%.1f",x1,x2);
    return 0;
}