// Accept string from user and copy only small case   data into another string
#include<stdio.h>

void strcpysmallX(char *src , char *dest )
{
   while(*src != '\0')
   {
      if((*src>='a') && (*src<='z'))
      {
         *dest=*src;
          dest++;
      }
 
      src++;
     
   }
   *dest = '\0';
}

   
int main()
{
   char Arr [20];
   char Brr [20];
   
   printf("Enter String:\n");
   scanf("%[^'\n']s",Arr); 
   
   strcpysmallX(Arr , Brr);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
