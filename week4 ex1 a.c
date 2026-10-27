#include<stdio.h>
void main()
{
int A,B,C,D,E,F,G,expression;
printf("\n enter the A,B,C,D,E,F,G values:");
scanf("%d%d%d%d%d%d%d",&A,&B,&C,&D,&E,&F,&G);
expression=A+B*C+(D*E)+F*G;
printf("%d",expression);
 
} 