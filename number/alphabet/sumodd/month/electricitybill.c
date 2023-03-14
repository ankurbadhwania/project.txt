// Write a C program to input electricity unit charges and
//  calculate total electricity bill according to the given condition:
// For first 50 units Rs. 0.50/unit
// For next 100 units Rs. 0.75/unit
// For next 100 units Rs. 1.20/unit
// For unit above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill
#include<stdio.h>
int main(){
    float units,charges;
    float elect_bill;
    printf("enter the units: ");
    scanf("%f",&units);
    if(units!=0){
        if(units<=50){
            charges=0.50*units;
            elect_bill=charges+charges*20/100;
            printf("electricity bill is %f",elect_bill);
        }
        else if(units<=150){
            charges=50*0.50+(0.75*(units-50));
            elect_bill=charges+charges*20/100;
            printf("electricity bill is %f", elect_bill);
        }
        else if(units<=250){
            charges=50*0.50+100*0.75+(1.20*(units-150));
            elect_bill=charges+charges*20/100;
            printf("electricity bill is %f", elect_bill);
        }
        else if(units>250){
            charges=50*0.50+100*0.75+100*1.20+1.50*(units-250);
            elect_bill=charges+charges*20/100;
             printf("electricity bill is %f", elect_bill);

        }
    }

    return 0;
}