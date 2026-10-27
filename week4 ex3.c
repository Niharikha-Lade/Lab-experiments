#include<stdio.h>
void main()
{
int s1,s2,s3,s4,s5,total;
float avg;
printf("\n enter the s1,s2,s3,s4,s5 values:");
scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
total=s1+s2+s3+s4+s5;
printf("\n%d",total);
 avg=(float)total/5;
 printf("\n the average score is %f",avg);
} 