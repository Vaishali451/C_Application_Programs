// Accept the string from user and count small character in it
#include<stdio.h>

int strlenSmall(char *str)
{
   int iCount=0;

   while(*str != '\0')
   {
      if((*str>= 'a') && (*str<= 'z'))
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

   iRet=strlenSmall(Arr);

   printf("number  of small letter in String :%d \n",iRet);
   
   return 0;

}
