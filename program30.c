// check prime number or not
#include<stdio.h>
#include<stdbool.h>

bool CheckPrime (int iNo)
{

}


int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter Number:\n");
    scanf("%d",& iValue);
 
    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("%d is prime number\n",iValue);
    }
    else
    {
       printf("%d is not prime number\n",iValue);
    }

    return 0;
}