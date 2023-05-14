// check how many times 8 occurs in number
#include<stdio.h>

int CountDigitsFrequency(int iNo)
{
     int iCount = 0;
     int iDigit = 0;

     while (iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit==8)
        {
            iCount++;
        }
        iNo = iNo /10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigitsFrequency(iValue);
    printf("Frequency of 8 is:%d\n",iRet);

    return 0;
}






/*
iNo = 761;

iDigit = iNo % 10       1
iNo = iNo / 10          76

iDigit = iNo % 10       6
iNo = iNo / 10          7

iDigit = iNo % 10       7
iNo = iNo / 10          0

*/

