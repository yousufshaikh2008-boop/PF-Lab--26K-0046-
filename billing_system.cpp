#include<stdio.h>
int main(){
    int units;
    float bill;
    printf("Enter the units you have consumed: \n");
    scanf("%d", &units);
    if (units<=50){
        float bill=units*0.50;
        printf("Your monthly bill is: Rs. %.2f\n", bill);
    }
    else if((units>50)&&(units<=150)){
        float bill=units*0.75;
        printf("Your monthly bill is: Rs. %.2f\n", bill);
    }
    else if ((units>150)&&(units<=250)){
        float bill=units*1.20;
        printf("Your monthly bill is: Rs. %.2f\n", bill);
    }
    else if(units>250){
        float bill=units*1.50;
        float total_bill=bill+(bill*0.20);
        printf("Additional Surcharge is added!\n");
        printf("Your monthly bill is: Rs. %f\n", total_bill);
    }
    return 0;
}
