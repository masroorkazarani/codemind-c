#include<stdio.h>
int main(){
    int unit;
    float cpu,bill,surcharge,tot;
    scanf("%d",&unit);
    if(unit<=199) cpu=1.20;
    else if(unit>=200 && unit<400) cpu=1.40;
    else if(unit>=400 && unit<600) cpu=1.60;
    else if(unit>=600 && unit<800) cpu=1.80;
    else cpu=2.00;
    bill=unit*cpu;
    if(bill>400) surcharge=bill*0.15;
    else surcharge=0.00;
    tot=bill+surcharge;
    printf("Units Consumed: %d
",unit);
    printf("Cost per Unit: %0.2f
",cpu);
    printf("Bill: %0.2f
",bill);
    printf("Surcharge: %0.2f
",surcharge);
    printf("Total Amount: %0.2f
",tot);
}