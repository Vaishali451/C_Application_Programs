// Accept the string from user and count Vowels(a e i o u A E I O U) in it
#include<stdio.h>

int CountVowels(char *str)
{
   int iCount=0;

   while(*str != '\0')
   {
      if((*str== 'A') || (*str== 'E')||(*str== 'I') || (*str== 'O')|| (*str== 'U') || (*str== 'a') || (*str== 'e')||(*str== 'i') || (*str== 'o')|| (*str== 'u')  )
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

   iRet=CountVowels(Arr);

   printf("number  of Vowels in String :%d \n",iRet);
   
   return 0;

}
