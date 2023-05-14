// program which accept number from user and return difference between
// summation of all its factors and non factors
#include<stdio.h>

int FactDiff(int iNo)
{
  int iCnt =0;
  int iSum = 0;
  int NiSum=0;
  int FiSum=0;

  for(iCnt = 1; iCnt <= iNo ; iCnt++)      
    {
        if((iNo % iCnt) != 0)
        {
          NiSum = NiSum + iCnt;
        }
    }

  for(iCnt = 1; iCnt <= iNo ; iCnt++)      
    {
        if((iNo % iCnt) == 0)
        {
          FiSum = FiSum + iCnt;
        }
    }
    
    iSum = NiSum-FiSum;
 
 return iSum;
}
int main()
{
    int iValue=0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",& iValue);

    iRet = FactDiff(iValue);
    
    printf("%d",iRet);

    return 0;
}