# include<stdio.h>

int main() {
    float side1;
    float side2;
    printf("enter side1: ");
    scanf("%f",&side1);
    printf("enter side2: ");
    scanf("%f",&side2);
    printf("area of sqr is : %f\n", side1 * side1);
    printf("area of cube is  :%f  ", side2 * side2*6);
    return 0;
}