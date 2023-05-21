// Accept the string from user and count Digits in it
#include<stdio.h>

int strlenDigits(char *str)
{
   int iCount=0;

   while(*str != '\0')
   {
      if((*str>= '0') && (*str<= '9'))
      {
          iCount++;
      }
        str++;
   }
   return iCount;
}

int main()
{
   char Arr[10];//static memory allocation
   int iRet=0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 

   iRet=strlenDigits(Arr);

   printf("number  of Digits in String :%d \n",iRet);
   
   return 0;

}
