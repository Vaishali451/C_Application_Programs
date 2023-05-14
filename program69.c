// accept number from user and return the largest digit in that number ex. input 7298  output:9
#include<stdio.h>

int MinimumDigit(int iNo)
{
  int iDigit = 0;
  int iMax = 0;
  
  if(iNo<0)
  {
     iNo= -iNo;
  }
  while(iNo !=0)
  {
    iDigit = iNo %10;

    if(iDigit> iMax)
    {
      iMax = iDigit;
    }
    iNo=iNo /10;
  }
  return iMax;
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = MinimumDigit(iValue);

    printf("Largest digit is : %d\n",iRet);

    return 0;

}
    






