#include<stdio.h>
void main()
{
int unit;
float base_bill,total_bill,sur_charge;
printf("\n enter Total units consumed:");
scanf("%d",&unit);
if(unit<=50)
{
 base_bill=unit*0.50;
}
else if (unit<=150)
{
base_bill=25+((unit-50)*0.75);
}
else if (unit<=250)
{
base_bill=100+((unit-150)*1.20);
}
else
{
 base_bill=220+((unit-250)*1.50);
}
sur_charge=base_bill*0.20;
total_bill=base_bill+sur_charge;
printf("\n total electricity bill=Rs%.2f",total_bill);
}



       
    