// Accept the string from user and print number of character using user defined function
#include<stdio.h>

int strlenX(char *str)
{
   int iCount=0;

   while(*str != '\0')
   {
      iCount++;
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

   iRet=strlenX(Arr);

   printf("Lenght of String is:%d \n",iRet);
   
   return 0;

}
