#include<stdio.h>
void main()
{
int operand1,operand2,result;
char operator;
printf("enter operator:");
scanf("%c",&operator);
printf("enter two operands:");
scanf("%d%d",&operand1,&operand2);
 switch(operator)
 {
  case'+':result=operand1+operand2;
           break;
  case '-':result=operand1-operand2;         
            break;
  case'/': result=operand1/operand2;
            break;
  case'*': result=operand1*operand2;
             break;
  case'%': result=operand1%operand2;
             break;
   default: printf("wrong operator");
   }                                        
if (result)
    printf("result=%d\n",result);
}       
    