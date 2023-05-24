// Accept the charachter from user and check that character present in string or not
#include<stdio.h>


int CountChar(char *str , char cValue)
{
   int iCount=0;

   while(*str != '\0')
   {
      if(*str== cValue)  
      {
          iCount++;
      }
        str++;
   }
   return iCount;
}

int main()
{
   char Arr[10];
   char ch ='\0';
   int iRet=0;


   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 

   fflush(stdin);

   printf("Enter the character which you want to search:\n");
   scanf("%c",&ch); // only add space before  %c

   iRet=CountChar(Arr , ch);

   printf("Number of character occurances are :%d \n",iRet);
   
   return 0;

}
