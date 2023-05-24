// Accept character from user and check its first occurance
#include<stdio.h>


int FirstOccurance(char *str , char cValue)
{
  int iCnt = 1;
  int iPos = 0;

  while(*str !='\0')
  {
    if(*str ==cValue)
    {
      iPos = iCnt;
      break;
    }
    str++ ;
    iCnt++ ;
  }
}
   


int main()
{
   char Arr [20];
   char ch = '\0';
   int iRet = 0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 

   printf("Enter the character:\n");
   scanf(" %c",&ch); 

   iRet=FirstOccurance(Arr, ch);

   printf("First occurance of that charachter is at: %d\n",iRet);
   
  
  return 0;
   

}
