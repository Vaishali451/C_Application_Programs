//Program to accept number from user and check wheather it contains 0 or not.

#include<stdio.h>
#include<stdbool.h>

bool CheckZero(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            break;
        }
        iNo = iNo / 10;
    }
    
    if(iDigit == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);
    if(bRet == true)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}
