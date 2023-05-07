// Write a program to Accept one number from user and display that time Jay Ganesh  on Screen

#include<stdio.h>

void Display(int iNo)
{
  int iCnt = 0;

  //      1         2         3
  for(iCnt = 1 ; iCnt<=iNo ; iCnt++)
  {
   printf("Jay Ganesh...\n");     // 4
  }
}

int main()
{
  int iValue = 0;

  printf("Enter the frequency of Jay Ganesh Statement:\n");4
  scanf("%d",&iValue);

  Display(iValue);

   return 0;
}