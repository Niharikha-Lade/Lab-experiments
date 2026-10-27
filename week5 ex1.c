#include<stdio.h>
void main()
{
int n1,n2,n3,n4,min1,min2,max1,max2;
printf("\n enter the n1,n2,n3,n4 values:");
scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
 if(n1>n2)
  {
   max1=n1;
   min1=n2;
  } 
 else  
  {
   max1=n2;
   min1=n1;
  }
 if(n3>n4)
  { 
   max2=n3;
   min2=n4;
  }
 else
  {
   max2=n4;
   min2=n3;
  }
 if(min1>min2)
 printf("\n %d is minimum",min2);
 else
 printf("\n %d is minimum",min1);
 if (max1>max2)
 printf("\n %d is maximum",max1);
 else
 printf("\n %d is maximum",max2);
} 
       
