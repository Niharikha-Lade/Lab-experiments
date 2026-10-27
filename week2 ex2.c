#include<stdio.h>
void main()
{ 
 float c,f,a,b;
 printf("\nenter the temperature in celsius:");
 scanf("\n%f",&c);
 a=c*9/5+32;
 printf("\ntemperature in fahrenheit is%f",a);
 printf("\nenter the temperature in fahrenheit:");
 scanf("\n%f",&f);
 b=(f-32)*5/9;
 printf("\ntemperature in celsius is %f",b);
} 