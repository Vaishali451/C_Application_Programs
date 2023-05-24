// Accept string from user and copy only Capital case   data into another string
#include<stdio.h>

void strcpyCapitalX(char *src , char *dest )
{
   while(*src != '\0')
   {
      if((*src>='A') && (*src<='Z'))
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
   
   strcpyCapitalX(Arr , Brr);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
