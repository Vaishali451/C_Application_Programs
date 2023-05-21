// program which accept number from user and return difference between summation of even and odd digits
#include<stdio.h>

int CountDiff(int iNo)
{
  int iDigit =0;
  int iSum = 0;
  int EvenSum=0;
  int OddSum=0;

     while(iNo != 0)
     {
        iDigit= iNo % 10;
        if((iDigit % 2) !=0)
        {
           OddSum = OddSum +iDigit;
           iDigit++;
        }
        iNo = iNo/10;
     }
     

  while(iNo != 0)
     {
        iDigit= iNo % 10;
        if((iDigit % 2) ==0)
        {
           EvenSum = EvenSum +iDigit;
           iDigit++;
        }
        iNo = iNo/10;
     }

    iSum = EvenSum-OddSum;
 
 return iSum;
}

int main()
{
  int iValue=0;
  int iRet = 0;
 
  printf("Enter number");
  scanf("%d",&iValue);

  iRet = CountDiff(iValue);
  printf("%d",iRet);

  return 0;
}