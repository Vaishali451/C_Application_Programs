// Accept the string from user and count Whitespace in it
#include<stdio.h>

int CountSpace(char *str)
{
   int iCount=0;

   while(*str != '\0')
   {
      if(*str== ' ')  
      {
          iCount++;
      }
        str++;
   }
   return iCount;
}

int main()
{
   char Arr[20];//static memory allocation
   int iRet=0;

   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 

   iRet=CountSpace(Arr);

   printf("number  of whitespaces in String :%d \n",iRet);
   
   return 0;

}
