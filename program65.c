// accept number from user and check whether than number pallidrome or not(Pallidrome means if 121 in input output should be reverse number 121)

#include<stdio.h>
# include<stdbool.h>

int CheckPallindrome(int iNo )
{
     int iDigit = 0;
     int iReverse = 0;
     int iTemp=iNo;

     while(iNo != 0)
     {
        iDigit= iNo % 10;
        iReverse =(iReverse * 10)+iDigit;
        iNo=iNo/10;
     }
     if (iReverse == iTemp)
     {
      return true;
     }
     else
     {
      return false;
     }
     return iReverse;
}
int main()
{
    int iValue = 0;
    bool iRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CheckPallindrome(iValue);
    if(iRet== true)
    {
       printf("%d is a pallidrome number \n",iValue);
    }
    else
    {
      printf("%d is not a pallidrome number \n",iValue);
    }
   
   return 0;

}
    






