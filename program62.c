// accept number from user and check whether that number contains how many even numbers
#include<stdio.h>


int CountOddDigits(int iNo )
{
    
     int iDigit = 0;
     int iCount = 0;

     if(iNo <0)
     {
        iNo =-iNo;
     }

     while(iNo != 0)
     {
        iDigit= iNo % 10;
        if((iDigit % 2) !=0)
        {
            iCount++;
        }
        iNo = iNo/10;
     }
     return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountOddDigits(iValue);

    
   printf("Frequency of Odd digits in %d is :%d \n", iValue,iRet);

   return 0;

}
    






