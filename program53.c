// display digits sepearately input :7854  output:4 5 8 7 seperately(FOR LOOP)
#include<stdio.h>

void DisplayDigits(int iNo)
{
     int iDigit = 0;

     for (;iNo != 0;iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);
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

