// Accept string from user and copy only Capital as well as Small case (Toggle)  data into another string
#include<stdio.h>

void strcpytoggleX(char *src , char *dest )
{
   while(*src != '\0')
   {
      if((*src>='A') && (*src<='Z'))
      {
         *dest=*src+32;
          
      }
      else if((*src>='a') && (*src<='z'))
      {
         *dest=*src-32;
         
      }
       else
      {
         *dest = *src;
      }
      
      dest++;
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
   
   strcpytoggleX(Arr , Brr);

   printf("String After copy is:%s\n",Brr);

   return 0;
   
}
