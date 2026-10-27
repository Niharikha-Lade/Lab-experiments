#include<stdio.h>
void main()
{
int a,b,c;
printf("\n enter a,b,c values:");
scanf("%d%d%d",&a,&b,&c);
(a>b)&&(a>c)?printf("%d is big",a):(b>a)&&(b>c)?printf("%d is big",b):printf("%d is big",c);
 }      
    