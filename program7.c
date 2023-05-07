// Write a program which checks whether number is divisiable by 3 and 5.

#include<stdio.h>     // for printf and scanf
#include<stdbool.h>  //for bool data type

///////////////////////////////////////////////////////////////////////
//
// Function name: CheckDivisible
// Input:         Integer
// Output:        Boolean
// Description:   Checks whether input is divisiable by 3 and 5
// Author:        Vaishali Sukhdev
// Date:          25/04/2023
// 
///////////////////////////////////////////////////////////////////////

bool CheckDivisible (int iNo)
{
  if(((iNo % 3)== 0) && ((iNo % 5)==0))
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
    printf("Please enter number to check whether if divisiable by 3 and 5 :\n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);  // Function call

    if ( bRet == true)
    {
        printf("%d is completely divisiable by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d is not completely divisiable by 3 and 5\n",iValue);
    }
    return 0;
}
/*
  Logical Operators

  1: Logical AND &&

  2: Logical OR ||

  ----------------------------------------------------------
  Expression1         Expression2        &&           ||

  ----------------------------------------------------------
   true                true              true        true
   true                false             false       true
   false               false             false       false
   false               true              false       true

  ----------------------------------------------------------
*/