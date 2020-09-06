//
//  main.c
//  Multipywithoutoperator
//
//  Copyright © 2020 Srinivas Ilancheran. All rights reserved.
//

#include <stdio.h>

void multi(int number1,int number2)
{
  int result=0;
  int num1=number1;
  int num2=number2;
  for(int i=1;i<=number2;i++)
  {
    result+=num1;
  }
  printf("%d multiplied by %d is %d ",num1,num2,result);
}

int main(void)
{
  printf("Hello World\n");
  int number1;
  int number2;
  printf("Enter a number");
  scanf("%d",&number1);
  printf("Enter a number to be multiplied by");
  scanf("%d",&number2);
  multi(number1,number2);
}
