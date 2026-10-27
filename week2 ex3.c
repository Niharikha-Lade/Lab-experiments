#include<stdio.h>
void main()
{ 
 int p,t,r;
 float si;
 printf("enter the p,t,r values:");
 scanf("%d%d%d",&p,&t,&r);
 si=p*t*r/100;
 printf("simple interest is %f",si);
} 