#include<stdio.h>
void main()
{ 
 int a,b,c,sum;
 float avg;
 printf("enter the values of a,b,c:");
 scanf("%d%d%d",&a,&b,&c);
 sum=a+b+c;
 printf("%d",sum);
 avg=sum/3;
 printf("\n%f",avg);
} 