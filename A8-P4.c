// program which accept number from user and  return multiplication of all digits
#include<stdio.h>

int MultDigits (int iNo)
{
   int iMult = 0;
   int iDigit = 0;
   
    while(iNo != 0)
    {
        iDigit = iNo % 10; // get the last-digit

        iMult= iMult* iDigit; 
        
        iNo=iNo / 10;  // remove the last digit
    }
    return iMult;
}

int main()
{
  int iValue=0;
  int iRet = 0;
 
  printf("Enter number");
  scanf("%d",&iValue);

  iRet = MultDigits(iValue);
  printf("%d",iRet);

  return 0;
}
