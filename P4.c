// program which accept three numbers and print its Multiplication
#include<stdio.h>

int Multiply(int iNo1 , int iNo2, int iNo3)
{
  int iMult= 0;

  if ((iNo1 , iNo2 ,iNo3 )== 0)
  {
    return 0;
  }
  
  iMult = iNo1*iNo2*iNo3;
  return iMult;
}
int main()
{
  int iValue1=0 , iValue2 =0 , iValue3 =0 ,bRet =0 ; 

  printf("Please Enter three number\n");
  scanf("%d %d %d ",&iValue1 , &iValue2 , &iValue3);

  bRet=Multiply(iValue1 , iValue2 ,iValue3);

  printf("three number Multiplication %d ",bRet);
  
  return 0;
}

