// Write a program which accepts the marks and display the class accordingly
// 0 to 34      Fail
// 35 to 49     pass class
// 50 to 59     second class
// 60 to 74     First class
// 75 to 100     First class with Distinction

#include<stdio.h>     // for printf and scanf

///////////////////////////////////////////////////////////////////////
//
// Function name: CheckEvenOdd
// Input:         Integer
// Output:        Boolean
// Description:   display class accordingly marks
// Author:        Vaishali Sukhdev
// Date:          25/04/2023
// 
///////////////////////////////////////////////////////////////////////

void DisplayClass (float fMarks)
{
  if((fMarks<0.0f) || (fMarks> 100.00f))   //Filter
  {
    printf("Invalid Input\n");
    printf("Please enter the marks in between the range 0 to 100");
    return;
  }



  if((fMarks>=0.0f) && (fMarks< 35.00f))
  {
    printf("you are fail\n");
  }
  else if ((fMarks>=35.00f) && (fMarks< 50.00f))
  {
    printf("You got pass Class\n");
  }
  else if ((fMarks>=50.00f) && (fMarks< 60.00f))
  {
    printf("You got second Class\n");
  }
  else if ((fMarks>=60.00f) && (fMarks< 75.00f))
  {
    printf("You got first Class\n");
  }
  else if ((fMarks>=75.00f) && (fMarks< 100.00f))
  {
    printf("You got first with Distinction Class\n");
  }

}


int main()
{
   float fValue = 0.0f;

   printf("please enter your Percentage:\n");
   scanf("%f",&fValue);

   DisplayClass(fValue);

   return 0;

}