// program to find factorial of given number
#include<stdio.h>

int Factorial(int iNo)
{
  int iCnt=0;
  int ifact=1 ;
  
  for(iCnt=1 ; iCnt <= iNo ; iCnt ++)
  {
    ifact=ifact*iCnt;
  }
   return ifact;
}

int main()
{
    int iValue=0; 
    int iRet=0;

    printf("Enter number");
    scanf("%d",& iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d",iRet);

    return 0;
}