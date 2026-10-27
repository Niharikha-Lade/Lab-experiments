#include<stdio.h>
#include<math.h>
void main()
{ 
 int p,t,r;
 float amount,ci;
 printf("enter p,t,r values:");
 scanf("%d%d%d",&p,&t,&r);
 amount=p*((pow((1+r/100),t)));
 ci=amount-p;
 printf("the compound interest is%.2f",ci);
 
} 