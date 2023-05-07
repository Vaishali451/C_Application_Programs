// Write a program which checks whether number is even or odd.

#include<stdio.h>     // for printf and scanf
#include<stdbool.h>  //for bool data type

///////////////////////////////////////////////////////////////////////
//
// Function name: CheckEvenOdd
// Input:         Integer
// Output:        Boolean
// Description:   Checks whether input is even or odd
// Author:        Vaishali Sukhdev
// Date:          25/04/2023
// Update date:   26/04/2023
//
///////////////////////////////////////////////////////////////////////

bool CheckEvenOdd (int iNo)
{
  if((iNo % 2)== 0)
  {
     return true;
  }
  else
  {
     return false;
  }

}

/////////////////////////////////////////////////////////////////////////
// Entry point Function
/////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;               // variable to accept input
    bool bRet = false;            // variable to accept return value
    printf("Please enter number to check whether if is even or odd:\n");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);  // Function call

    if ( bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}