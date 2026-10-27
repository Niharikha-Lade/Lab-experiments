#include<stdio.h>
#include<math.h>
void main()
{ 
float a,b,c,s,ar;
 printf("\n enter a,b,c values:");
 scanf("%f%f%f",&a,&b,&c);
 s=a+b+c/2;
 ar=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("\n the area of triangle using herons formula is %f",ar);
 
} 